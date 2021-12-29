#ifndef GAME_BIRD_HXX
  #define GAME_BIRD_HXX
#endif //GAME_BIRD_HXX

#pragma once

#include <ge211.hxx>
#include <iostream>
#include <pipes.hxx>



using Position = ge211::Posn<int>;


using Velocity = ge211::Dims<int>;

/// W
using Block = ge211::Rect<int>;


//AI constants
constexpr unsigned char MUTATION_PROBABILITY = 64;
constexpr unsigned char TOTAL_HIDDEN_NODES = 4;
constexpr unsigned char TOTAL_INPUT_NODES = 2;
constexpr unsigned char TOTAL_OUTPUT_NODES = 1;

struct Bird
{
    //
    // CONSTRUCTOR
    //

    Bird();

    //
    // MEMBER FUNCTIONS
    //


    //Convoluted neural network ai
    bool cnn(std::vector<ge211::geometry::Posn<int>>);

    Bird next(double dt) const;

    // These functions all perform collision detection by telling us whether
    // this ball is *past* the given edge.

    bool hits_bottom() const;

    bool hits_top() const;



    bool hits_pipe(std::vector<ge211::geometry::Posn<int>>) const;

    float calculate_gap_difference(std::vector<ge211::geometry::Posn<int>>);

    void jump();

    void crossover(std::mt19937_64& i_random_engine, const std::vector<std::vector<std::vector<float>>>& i_bird_0_weights, const std::vector<std::vector<std::vector<float>>>& i_bird_1_weights);

    void generate_weights(std::mt19937_64& i_random_engine);

    void reset();

    std::vector<std::vector<std::vector<float>>> get_weights();

    //
    // MEMBER VARIABLES
    //


    /// The position of the top left of the bird.
    Position position;



    /// The current velocity of the bird in pixels per tick.
    float velocity;
    /// The start velocity of the bird in pixels per tick.
    float jump_velocity;

    int fitness;


    std::uniform_int_distribution<unsigned short>mutation_distribution;

    std::uniform_real_distribution<float> node_distribution;

    std::vector<std::vector<std::vector<float>>> weights;

    /// The gravitational constant
    float gravity;
   /// whether the bird is alive
    bool live;



};

/// Compares two birds for equality. This may be useful for testing.
///
/// Two birds are equal if all their member variables are pairwise
/// equal.
bool
operator==(Bird const&, Bird const&);

/// Inequality for birdss.
bool
operator!=(Bird const&, Bird const&);

bool
operator > (Bird const&, Bird const&);

bool
operator < (Bird const&, Bird const&);
