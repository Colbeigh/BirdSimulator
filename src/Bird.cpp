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
    setActivity(new FletchlingSpringActivity());
    performActivity;

    setActivity(new FletchlingSummerActivity());
    performActivity;

    setActivity(new FletchlingFallActivity());
    performActivity;

    setActivity(new FletchlingWinterActivity());
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
    setActivity(new RuffletSpringActivity());
    performActivity;

    setActivity(new RuffletSummerActivity());
    performActivity;

    setActivity(new RuffletFallActivity());
    performActivity;

    setActivity(new RuffletWinterActivity());
    performActivity;
}