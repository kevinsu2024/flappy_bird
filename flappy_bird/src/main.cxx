#include "model.hxx"
#include "controller.hxx"

//set initial window bounds
ge211::geometry::Dims<int> screen_dimensions{500, 595};

int
main()
{
    Model model;
    Controller controller(model, screen_dimensions);
    controller.run();
}
