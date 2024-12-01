#include "Bird.hpp"
Bird::Bird(){}

Bird::~Bird(){}

void Bird::setActivity(SeasonActivity* newActivity){
    activity = newActivity;
}

Fletchling::Fletchling() {
    name = "Fletchling";
    region = "Kalos";
}

Fletchling::~Fletchling() {}

void Fletchling::performActivity(){
    activity->performActivity(name);
}

void Fletchling::allActivities(){
    std::cout <<"----- " << name <<" -----\n";
    std::cout << name << "'s home region is " <<
    region << ".\n";

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
}

Rufflet::~Rufflet() {}

void Rufflet::performActivity(){
    activity->performActivity(name);
}

void Rufflet::allActivities(){
    std::cout <<"----- " << name <<" -----\n";
    std::cout << name << "'s home region is " <<
    region << ".\n";

    setActivity(new RuffletSpring());
    performActivity();

    setActivity(new RuffletSummer());
    performActivity();

    setActivity(new RuffletFall());
    performActivity();

    setActivity(new RuffletWinter());
    performActivity();
}

PikiPek::PikiPek() {
    name = "PikiPek";
    region = "Kalos";
}

PikiPek::~PikiPek() {}

void PikiPek::performActivity(){
    activity->performActivity(name);
}

void PikiPek::allActivities(){
    std::cout <<"----- " << name <<" -----\n";
    std::cout << name << "'s home region is " <<
    region << ".\n";

    setActivity(new PikiPekSpring());
    performActivity();

    setActivity(new PikiPekSummer());
    performActivity();

    setActivity(new PikiPekFall());
    performActivity();

    setActivity(new PikiPekWinter());
    performActivity();
}


Starly::Starly() {
    name = "Starly";
    region = "Unova";
}

Starly::~Starly() {}

void Starly::performActivity(){
    activity->performActivity(name);
}

void Starly::allActivities(){
    std::cout <<"----- " << name <<" -----\n";
    std::cout << name << "'s home region is " <<
    region << ".\n";

    setActivity(new StarlySpring());
    performActivity();

    setActivity(new StarlySummer());
    performActivity();

    setActivity(new StarlyFall());
    performActivity();

    setActivity(new StarlyWinter());
    performActivity();
}