#include "model.hxx"
#include "pipes.hxx"
Model::Model()
: bird(),
  pipes(),
  score(0),
  previous_game_score(score)
{}


void
Model::start_game(){
    bird.live = true;
}

void
Model::on_frame(double dt){
    if(bird.live){
        Bird next_bird = bird.next(dt);

        if(next_bird.hits_bottom() or next_bird.hits_top() or
        next_bird.hits_pipe(pipes.pipe_positions)){
            bird = Bird();
            return;
        }

        bird = next_bird;
        calculate_gap_difference(pipes.pipe_positions);
        if (bird.gap_difference > 0){
            bird.jump();
        }
        pipes.move_pipes(dt);
        update_score();


    }
    else{
        return;
    }

}


void
Model::calculate_gap_difference(std::vector<ge211::geometry::Posn<int>> posns)
{
    for (Position top_left: posns) {

        if (top_left.x - bird.position.x < 250 and
            top_left.x - bird.position.x > 0){
            bird.gap_difference = bird.position.y - (top_left.y + (495+ 305)/2);
            std::cout << std::to_string(
                    bird.gap_difference) + "    |     ";
        }

    }
    std::cout << "\n";

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
    for (unsigned int i = 0; i < pipes.pipe_positions.size(); i++){
        if(!pipes.scored_pipes.at(i)
        && bird.position.x >= pipes.pipe_positions.at(i).x + 390){
            score++;
            pipes.scored_pipes.at(i) = true;
        }
    }
}
