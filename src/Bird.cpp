#include "Bird.hpp"
Bird::Bird() {
    activity = nullptr;
}

Bird::~Bird() {

}

void Bird::setActivity(SeasonActivity* newActivity) {
    activity = newActivity;
}

void Bird::cleanUp() {
    delete activity;
    activity = nullptr;
}

Fletchling::Fletchling() {
    name = "Fletchling";
    region = "Kalos";
}

Fletchling::~Fletchling() {
    delete activity;
}

void Fletchling::performActivity() {
    activity->performActivity(name);
    cleanUp();
}

void Fletchling::allActivities() {
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

void Rufflet::performActivity() {
    activity->performActivity(name);
}

void Rufflet::allActivities() {
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

PikiPek::~PikiPek() {
    delete activity;
}

void PikiPek::performActivity() {
    activity->performActivity(name);
}

void PikiPek::allActivities() {
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

Starly::~Starly() {
    delete activity;
}

void Starly::performActivity() {
    activity->performActivity(name);
}

void Starly::allActivities() {
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
