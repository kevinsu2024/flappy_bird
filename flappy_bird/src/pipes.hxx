#ifndef GAME_PIPES_HXX
  #define GAME_PIPES_HXX
#endif //GAME_PIPES_HXX

#pragma once

#include <ge211.hxx>
#include <iostream>

struct Pipes{
    Pipes();
    //pipe positions
    std::vector<ge211::geometry::Posn<int>> pipe_positions;

    std::vector<bool> scored_pipes;

    ge211::Random_source<int> pipe_shift_;
    float pipe_velocity_;
    void move_pipes(double dt);

};