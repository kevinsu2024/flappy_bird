#include "controller.hxx"

Controller::Controller(Model& model, ge211::Dims<int> screen_dimensions)
        :
        model_(model),
        view_(model),
        screen_dimensions_(screen_dimensions),
        played_death_sound_(true),
        last_checked_score_(model_.score)


{
    flap_sound_.try_load("flap.mp3", mixer());
    points_sound_.try_load("points.mp3", mixer());
    death_sound_.try_load("death.mp3", mixer());
}

ge211::Dims<int>
Controller::initial_window_dimensions() const
{
    return screen_dimensions_;
}

void
Controller::on_key(ge211::Key key)
{

    if (key == ge211::Key::code('q')) {
        quit();
    }

    ///Old code for no AI.

    //if(key == ge211::Key::code(' ')){
      //  mixer().play_effect(flap_sound_);
        //if (model_.bird.live){

         //   model_.bird.jump();

       // }
        //else{
        //model_.start_game();
        //}


        //played_death_sound_ = false;
    //}


}

void
Controller::on_frame(double dt)
{
    model_.on_frame(dt);
    bool all_dead = true;
    for (Bird bird: model_.birds){
        if (bird.live){
            all_dead = false;
        }
    }
    if (all_dead){
        if (!played_death_sound_){
            mixer().play_effect(death_sound_);
            played_death_sound_ = true;
            model_.reset_game();
            last_checked_score_ = 0;
        }
    }
    //else if (last_checked_score_ < model_.score){
    //    mixer().play_effect(points_sound_);
    //    last_checked_score_ ++;
    //}


}

void
Controller::draw(ge211::Sprite_set& set)
{
    view_.draw(set);
}
