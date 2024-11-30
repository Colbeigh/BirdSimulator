#include <bird.hpp>

Nest* Bird::getNest(){
    return nest;
}

void Bird::setActivity(SeasonActivity* newActivity){
    activity = newActivity
}

Fletchling::Fletchling() {
    nestBuilder = new FletchlingNestBuilder;
    nest = nestBuilder ->buildNest
}

void Fletchling::performActivity{
    activity->performActivity();
}

void Fletchling::allActivities(){
    setActivity(new FletchlingSpring());
    performActivity;

    setActivity(new FletchlingSummer());
    performActivity;

    setActivity(new FletchlingFall());
    performActivity;

    setActivity(new FletchlingWinter());
    performActivity;
}


Rufflet::Rufflet() {
    nestBuilder = new RuffletNestBuilder;
    nest = nestBuilder ->buildNest
}

void Rufflet::performActivity{
    activity->performActivity();
}

void Rufflet::allActivities(){
    setActivity(new RuffletSpring());
    performActivity;

    setActivity(new RuffletSummer());
    performActivity;

    setActivity(new RuffletFall());
    performActivity;

    setActivity(new RuffletWinter());
    performActivity;
}