#include "Bird.hpp"
Bird::Bird(){}

Bird::~Bird(){}

Nest Bird::getNest(){
    return nest;
}

void Bird::setActivity(SeasonActivity* newActivity){
    activity = newActivity;
}

Fletchling::Fletchling() {
    nestbuilder = new FletchlingNestBuilder;
    nestbuilder ->buildNest(nest);
    name = "Fletchling";
}

Fletchling::~Fletchling() {}

void Fletchling::performActivity(){
    activity->performActivity();
}

void Fletchling::allActivities(){
    setActivity(new FletchlingSpring());
    performActivity();

    setActivity(new FletchlingSummer());
    performActivity();

    setActivity(new FletchlingFall());
    performActivity();

    setActivity(new FletchlingWinter());
    performActivity();
}


Rufflet::Rufflet() {
    nestbuilder = new RuffletNestBuilder;
    nest = nestbuilder ->buildNest(nest);
    name = "Rufflet";
}

Rufflet::~Rufflet() {}

void Rufflet::performActivity(){
    activity->performActivity();
}

void Rufflet::allActivities(){
    setActivity(new RuffletSpring());
    performActivity();

    setActivity(new RuffletSummer());
    performActivity();

    setActivity(new RuffletFall());
    performActivity();

    setActivity(new RuffletWinter());
    performActivity();
}