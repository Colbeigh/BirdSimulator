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

