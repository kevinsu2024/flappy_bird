#pragma once

#include "view.hxx"

#include <ge211.hxx>

class Controller : public ge211::Abstract_game
{
public:
    Controller(Model& model, ge211::Dims<int> board_dimensions);
    ge211::Dims<int> initial_window_dimensions() const override;


protected:

    void draw(ge211::Sprite_set& set) override;

    void on_key(ge211::Key) override;

    void on_frame(double dt) override;


private:
    Model& model_;
    View view_;
    ge211::Dims<int> screen_dimensions_;
    ge211::audio::Sound_effect flap_sound_; //flap
    ge211::audio::Sound_effect points_sound_;
    ge211::audio::Sound_effect death_sound_; //death
    bool played_death_sound_;
    int last_checked_score_;
};
