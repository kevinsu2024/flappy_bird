#pragma once

#include "bird.hxx"
#include <vector>
#include <iostream>

class Model
{
    //public functions
public:

    explicit Model();
    //bird
    Bird bird;

    int score;

    int previous_game_score;



    //pipe positions
    std::vector<ge211::geometry::Posn<int>> pipe_positions;

    std::vector<bool> scored_pipes;


    //starts the game when spacebar is pressed
    void start_game();


    //creates the motion in the game
    void on_frame(double dt);

    void reset_game();

private:
    //random pipe shift
    ge211::Random_source<int> pipe_shift_;
    float pipe_velocity_;
    void move_pipes(double dt);
    void update_score();














private:








};
