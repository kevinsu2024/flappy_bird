#pragma once

#include "bird.hxx"
#include "pipes.hxx"
#include <vector>
#include <iostream>

class Model
{
    //public functions
public:

    explicit Model();
    //bird
    Bird bird;

    Pipes pipes;

    int score;

    int previous_game_score;




    //starts the game when spacebar is pressed
    void start_game();


    //creates the motion in the game
    void on_frame(double dt);

    ///calculates the y-coordinate difference between the center of the pipe
    /// gap and the the bird

    void calculate_gap_difference(std::vector<ge211::geometry::Posn<int>>);

    void reset_game();

private:
    //random pipe shift

    void update_score();














private:








};
