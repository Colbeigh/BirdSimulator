#include "Bird.hpp"
Bird::Bird(){}

Bird::~Bird(){}

void Bird::setActivity(SeasonActivity* newActivity){
    activity = newActivity;
}

Fletchling::Fletchling() {
    name = "Fletchling";
    region = "Kalos";
    std::cout <<"----- " << name <<" -----\n";
    std::cout << name << "'s home region is " <<
    region << "\n";
}

Fletchling::~Fletchling() {}

void Fletchling::performActivity(){
    activity->performActivity(name);
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
    name = "Rufflet";
    region = "Unova";
    std::cout <<"----- " << name <<" -----\n";
    std::cout << name << "'s home region is " <<
    region << "\n";
}

Rufflet::~Rufflet() {}

void Rufflet::performActivity(){
    activity->performActivity(name);
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