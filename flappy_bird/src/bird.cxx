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
        velocity(400),
        jump_velocity(400),
        gravity(980),
        live(false)
{ }


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

// As with the edge collision functions, we want to use the ball's
// bounding box. That is, the box whose top is center.y - radius, whose
// left is center.x - radius, whose bottom is center.y + radius, and
// whose right is center.x + radius.
//
// That way, we are checking for the intersection of two rectangles.
//
// One way to think of that is that the rectangles *don't* intersect if
// either of these is true:
//
//  - The right side of one rectangle is to the left of the left side of
//  the other.
//
//  - The bottom of one rectangle is above the top of the other
//
// Otherwise, they do.
//
// bool
// Bird::hits_block(Block const& block) const
// {
//     float right_rectangle = block.x + block.width;
//     float left_rectangle = block.x;
//     float top_rectangle = block.y;
//     float bottom_rectangle = block.y + block.height;
//     float top_ball = center.y - radius;
//     float bottom_ball = center.y + radius;
//     float left_ball = center.x - radius;
//     float right_ball = center.x + radius;
//     return !(   (right_rectangle < left_ball) ||
//                 (right_ball < left_rectangle) ||
//                 (top_rectangle > bottom_ball) ||
//                 (top_ball > bottom_rectangle));
// }


// Once you've written `Ball::hits_block`, finding an element of `bricks`
// that collides with this ball isn't hard (use a for-each loop), but
// how to /remove it once you find it? The more obvious solution may be
// to shift all the elements after it to the left, but that's awkward,
// and there's a cleaner way when the order of the elements of the
// vector doesn't matter:
//
//  1. Replace the hit brick with a copy of the last brick (`bricks.last()`)
//     by assignment. If you want to edit a brick in `bricks`, make sure each
//     brick given by the for-each loop is a reference to the existing brick,
//     not a copy.
//
//  2. Now the brick you didn't want is gone, but you have an extra in the back
//     that duplicates the one you just got rid of, so remove the last brick
//     using pop_back().
//
//  3. Don't keep iterating after a pop_back() or you will go out of
//     bounds, because the loop condition won't adjust to the diminished
//     vector.
//


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
