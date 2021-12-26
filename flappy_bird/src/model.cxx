#include "model.hxx"

Model::Model()
: bird(),
  score(0),
  previous_game_score(score),
  pipe_shift_(-225,-10),
  pipe_velocity_(200)
{
    for(int i = 0; i < 5; i++){
        pipe_positions.push_back( {200 + i * 250, pipe_shift_.next()});
        scored_pipes.push_back(false);
    }
}

void
Model::start_game(){
    bird.live = true;
}

void
Model::on_frame(double dt){
    if(bird.live){
        Bird next_bird = bird.next(dt);

        if(next_bird.hits_bottom() or next_bird.hits_top() or
        next_bird.hits_pipe(pipe_positions)){
            bird = Bird();
            return;
        }
        bird = bird.next(dt);
        move_pipes(dt);
        update_score();

    }
    else{
        return;
    }

}

void
Model::reset_game()
{
    if (score > previous_game_score){
        previous_game_score = score;
    }

    pipe_positions.clear();
    scored_pipes.clear();

    score = 0;
    for(int i = 0; i < 5; i++){
        pipe_positions.push_back( {200 + i * 250, pipe_shift_.next()});
        scored_pipes.push_back(false);
    }
}

void
Model::move_pipes(double dt)
{
    for (unsigned int i = 0; i < pipe_positions.size(); i++){
        pipe_positions.at(i).x -= (int)(pipe_velocity_ * dt);
    }
    if(pipe_positions.at(0).x + 420 < 0){
        pipe_positions.erase(pipe_positions.begin());
        pipe_positions.push_back({3 * 250 + 100, pipe_shift_.next()});
        scored_pipes.erase(scored_pipes.begin());
        scored_pipes.push_back(false);
    }
}

void
Model::update_score()
{
    for (unsigned int i = 0; i < pipe_positions.size(); i++){
        if(!scored_pipes.at(i)
        && bird.position.x >= pipe_positions.at(i).x + 390){
            score++;
            scored_pipes.at(i) = true;
        }
    }
}
