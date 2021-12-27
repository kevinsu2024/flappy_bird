// YOU DEFINITELY NEED TO MODIFY THIS FILE.

#include "bird.hxx"


// Computes where the ball should be when it's stuck to the paddle:
// centered above it, 1 pixel up.
static Position
start_position()
{
    return {150, 276};
}

// It won't compile without this, so you get it for free.

Bird::Bird()
        :
        position(start_position()),
        velocity(600),
        jump_velocity(600),
        gap_difference(1),
        fitness(0),
        score(0),
        mutation_distribution(0, MUTATION_PROBABILITY - 1),
        //real_distribution includes the min value and excludes the max.
        //And since I'm a crazy perfectionist, I used nextafter.
        node_distribution(-1, std::nextafter(1, 2)),
        weights(2),
        gravity(2500),
        live(false)
{
}

//bool
//Bird::ai(){

  //  std::vector<std::vector<float>> neural_network(3);

    //neural_network[0].resize(TOTAL_INPUT_NODES);
   // neural_network[1].resize(TOTAL_HIDDEN_NODES, 0);
    //neural_network[2].resize(TOTAL_OUTPUT_NODES, 0);
//}

bool
Bird::hits_bottom() const
{
    return position.y+10 > 590;
}

// The ball hits the top when the y coordinate of its top is less than
// 0. (Note that the parameter isn't used.)
bool
Bird::hits_top() const
{
    return position.y < -10;
}


// Recall that `this` is a `const Ball*`, and you can create a copy of a ball
// with the copy constructor. So to get a new `Ball` to return, you can write
//
//     Ball result(*this);
//

Bird
Bird::next(double dt) const
{
    Bird result(*this);
    result.position.y -= (velocity * dt - (0.5 * gravity * dt * dt));
    result.velocity = (result.velocity - gravity * dt);


    return result;
}

bool
Bird::hits_pipe(std::vector<Position> posns) const{
    for (Position top_left: posns){
        if ((position.y < top_left.y + 305 || position.y > top_left.y + 495)
        && (position.x > top_left.x + 280 && position.x < top_left.x + 390)){
            return true;
        }
    }
    return false;
}




void
Bird::jump()
{
    velocity = jump_velocity;
}

bool
operator==(Bird const& a, Bird const& b)
{
    return a.position == b.position && a.velocity == b.velocity && a.gravity
    == b.velocity && a.live == b.live && a.jump_velocity == b.jump_velocity;
}

bool
operator!=(Bird const& a, Bird const& b)
{
    return !(a == b);
}

std::ostream&
operator<<(std::ostream& o, Bird const& bird)
{
    // You may have seen this message when running your tests. It
    // would be more helpful if it showed the contents of each ball,
    // right? So you can make that happen by making this print the
    // contents of the ball (however you like).
    o << "Bird{";
    o << bird.velocity;
    return o << "}";
}
