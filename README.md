# flappy_bird_ai
This is a C++ implementation of a Flappy Bird AI, using simple neural network (1 layer of hidden nodes) and genetic algorithm(uniform crossover).

Birds initially have randomly generated weights.

Inputs(4):
1. Bird's vertical distance to center of the vertical center of beginning of gap opening of the closest pipe, 
2. Bird's vertical distance to center of the vertical center of the end of the gap opening,
3. Bird's y-velocity, and
4. Bird's horizontal distance to the closest pipe

Outputs(1):
1. Whether to jump

Individual bird's fitness is measured by the time the bird has stayed alive

Results:
By gen 2 they are already able to distinguish their survival factor (i.e. stay within the gap opening) but still flaps randomly when they're within the gap. Birds are generally able to flap infinitely and know to maintain a certain altitude i.e. y-position on gen 8/9. 

