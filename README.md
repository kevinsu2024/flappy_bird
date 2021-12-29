# flappy_bird_ai
This is a C++ implementation of a Flappy Bird AI, using simple neural network (1 layer of hidden nodes) and genetic algorithm(uniform crossover).

Birds initially have randomly generated weights.

Inputs(2):
1. Bird's vertical distance to center of the gap opening of the closest pipe, and 
2. Bird's y-velocity

Outputs(1):
1. Whether to jump

Individual bird's fitness is measured by a function of the time the bird has stayed alive and the distance of death to the center of the gap opening of the closest pipe.


