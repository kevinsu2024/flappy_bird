#pragma once

#include "model.hxx"

class View
{
public:
    explicit View(Model const& model);

    void draw(ge211::Sprite_set& set);

    void score_swap_draw(ge211::Sprite_set& set);

private:
    ///private helper functions
    Model const& model_;

    // Sprites for the game
    ge211::Image_sprite bird_ {"bird.png"};
    ge211::Image_sprite pipe_ {"pipe.png"};
    ge211::Image_sprite background_ {"background.png"};
    ge211::Font current_score_font_ ;
    ge211::Font last_score_font_;
    ge211::sprites::Text_sprite current_score_sprite_;
    ge211::sprites::Text_sprite last_score_sprite_;
    int last_checked_score_;
    void draw_score_(ge211::Sprite_set& set);
};
