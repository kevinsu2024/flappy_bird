#include "model.hxx"
#include "pipes.hxx"
Model::Model()
: birds(),
  pipes(),
  score(0),
  previous_game_score(score),
  bird_jumps(-1,1),
  one_bird_alive(true),
  random_engine(std::chrono::system_clock::now().time_since_epoch().count()),
  generation(0),
  max_fitness_(-10000000),
  death_y_(300000000),
  generated_weights_(false)

{

}


void
Model::start_game(){

    for (Bird& bird: birds){


        bird.live = true;

        bird.generate_weights(random_engine);
        std::cout << bird.weights.size();
    }

}

void
Model::on_frame(double dt){
    if(!generated_weights_){
        generated_weights_ = true;
        for (Bird& bird: birds){
            bird.generate_weights(random_engine);
        }

    }
    one_bird_alive = false;
    for (int i = 0; i < birds.size(); i++) {
        if (birds[i].live) {
            one_bird_alive = true;

            Bird next_bird = birds[i].next(dt);

            if (next_bird.hits_bottom() or next_bird.hits_top() or
                next_bird.hits_pipe(pipes.pipe_positions)) {
                birds[i].fitness -= 0.01* abs(birds[i].calculate_gap_difference
                        (pipes.pipe_positions));
                birds[i].live = false;
                if (birds[i].fitness > max_fitness_){
                    max_fitness_ = birds[i].fitness;
                    death_y_ = birds[i].calculate_gap_difference(pipes.pipe_positions);
                }


                return;
            }

            birds[i] = next_bird;

            if (birds[i].velocity < -100 && 1==birds[i].cnn(pipes
            .pipe_positions))
            {

                birds[i].jump();
            }

        }
    }
    if (!one_bird_alive){
        reset_game();
        generation += 1;
        std::sort(birds.begin(), birds.end(), std::greater<Bird>());
        for (auto a = 2 + birds.begin(); a != birds.end(); a++){
            a->crossover(random_engine, birds[0].get_weights(), birds[1]
            .get_weights());
        }
        for (Bird& bird: birds){
            bird.reset();
        }
        std::cout<< "--------GENERATION: " + std::to_string(generation) +
        "--------------\n";
        std::cout<< "max fitness: " + std::to_string(max_fitness_) + "\n";
        std::cout<< "death gap diff: " + std::to_string(death_y_) + "\n";
        max_fitness_ = -100000;
        death_y_ = 300000000;

    }
    else{
        pipes.move_pipes(dt);
        update_score();
    }

}





void
Model::reset_game()
{
    if (score > previous_game_score){
        previous_game_score = score;
    }

    pipes.pipe_positions.clear();
    pipes.scored_pipes.clear();





    score = 0;
    for(int i = 0; i < 5; i++){
        pipes.pipe_positions.push_back( {200 + i * 250, pipes.pipe_shift_.next
        ()});
        pipes.scored_pipes.push_back(false);
    }
}



void
Model::update_score()
{
    int highest_score = 0;
    for (Bird& bird:birds){
        for (unsigned int i = 0; i < pipes.pipe_positions.size(); i++){
            if(!pipes.scored_pipes.at(i)
               && bird.position.x >= pipes.pipe_positions.at(i).x + 390){
                score++;
                pipes.scored_pipes.at(i) = true;
            }
        }
    }

}
