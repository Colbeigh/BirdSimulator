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
    region << ".\n";
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
    region << ".\n";
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

PikiPek::PikiPek() {
    name = "Fletchling";
    region = "PikiPek";
    std::cout <<"----- " << name <<" -----\n";
    std::cout << name << "'s home region is " <<
    region << ".\n";
}

PikiPek::~PikiPek() {}

void PikiPek::performActivity(){
    activity->performActivity(name);
}

void PikiPek::allActivities(){
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
    std::cout <<"----- " << name <<" -----\n";
    std::cout << name << "'s home region is " <<
    region << ".\n";
}

Starly::~Starly() {}

void Starly::performActivity(){
    activity->performActivity(name);
}

void Starly::allActivities(){
    setActivity(new StarlySpring());
    performActivity();

    setActivity(new StarlySummer());
    performActivity();

    setActivity(new StarlyFall());
    performActivity();

    setActivity(new StarlyWinter());
    performActivity();
}