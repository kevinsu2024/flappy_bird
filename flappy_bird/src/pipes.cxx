
#include <pipes.hxx>

Pipes::Pipes()
:
        pipe_shift_(-225,-10),
        pipe_velocity_(200)
{
    for(int i = 0; i < 5; i++){
        pipe_positions.push_back( {200 + i * 250, pipe_shift_.next()});
        scored_pipes.push_back(false);
    }
}

void
Pipes::move_pipes(double dt)
{
    for (unsigned int i = 0; i < pipe_positions.size(); i++){
        pipe_positions.at(i).x -= (int)(pipe_velocity_ * dt);
    }
    if(pipe_positions.at(0).x+420 < 0){
        pipe_positions.erase(pipe_positions.begin());
        pipe_positions.push_back({3 * 250 + 100, pipe_shift_.next()});
        scored_pipes.erase(scored_pipes.begin());
        scored_pipes.push_back(false);
    }
}