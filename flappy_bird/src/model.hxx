#pragma once

#include "bird.hxx"
#include "pipes.hxx"
#include <vector>
#include <iostream>
#include <array>
#include <chrono>
#include <random>

class Model
{
    //public functions
public:

    explicit Model();

    //Number of birds
    std::array<Bird, 8> birds;

    //Array of pipe positions
    Pipes pipes;

    //Highest bird score of current generation
    int score;

    //Generation number
    int generation;

    //Last gen's highest score
    int previous_game_score;

    //Whether all birds are dead
    bool one_bird_alive;



    //starts the game when spacebar is pressed
    void start_game();


    //creates the motion in the game
    void on_frame(double dt);


    void reset_game();

private:
    //random bird jump
    ge211::Random_source<int> bird_jumps;
    std::mt19937_64 random_engine;

    int max_fitness_;
    int death_y_;
    bool generated_weights_;
    void update_score();














private:








};
