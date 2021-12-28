#include "view.hxx"
#include <string>

View::View(Model const& model)
        : model_(model),
          bird_("bird.png"),
          pipe_("pipe.png"),
          background_("background.png"),
          line_(ge211::geometry::Dims<int>{5,1},
                ge211::Color::white()),
          current_score_font_("sans.ttf", 20),
          last_score_font_("sans.ttf", 20),
          current_score_sprite_("Current score: 0" ,last_score_font_),
          last_score_sprite_("Highest score: 0", last_score_font_),
          generation_sprite_("Generation : 0", last_score_font_),
          last_checked_score_(0)
{ }

void
View::draw(ge211::Sprite_set& set)
{

    //draws bird's initial position
    int position_shift = 0;
    for (Bird bird: model_.birds){
        if (bird.live){
            set.add_sprite(bird_, bird.position , 1,
                           ge211::geometry::Transform::scale
                                   (0.12));
        }


    }


    //draws background
    set.add_sprite(background_, {0, -60}, 0, ge211::geometry::Transform::scale
            (4));

    //draws pipes according to pipe_positions
    for (ge211::geometry::Posn<int> pos: model_.pipes.pipe_positions) {
        set.add_sprite(pipe_, pos, 1,
                       ge211::geometry::Transform::scale_x(0.9));
    }




    draw_score_(set);

}

void
View::draw_score_(ge211::Sprite_set& set){
    if(last_checked_score_ < model_.score){
        ge211::Text_sprite::Builder builder(current_score_font_);
        builder << "Current score: " + std::to_string(model_.score);
        current_score_sprite_.reconfigure(builder);
        last_checked_score_++;
    }
    ge211::Text_sprite::Builder generation_builder(last_score_font_);
    generation_builder << "Generation : "+ std::to_string((model_.generation));
    generation_sprite_.reconfigure(generation_builder);

    set.add_sprite(current_score_sprite_, {100, 80}, 5);
    set.add_sprite(last_score_sprite_, {    100, 50}, 5);
    set.add_sprite(generation_sprite_, {100, 20}, 5);
   if(!model_.one_bird_alive){
        score_swap_draw(set);
        last_checked_score_ = 0;
   }
}

void
View::score_swap_draw(ge211::Sprite_set& set)
{

    ge211::Text_sprite::Builder builder_current(current_score_font_);
    builder_current << "Current Score: " + std::to_string(0);
    current_score_sprite_.reconfigure(builder_current);

    ge211::Text_sprite::Builder builder_last(last_score_font_);
    builder_last << "Highest Score: " + std::to_string(model_
    .previous_game_score);
    last_score_sprite_.reconfigure(builder_last);

}
