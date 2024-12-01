#include "Bird.hpp"
Bird::Bird() {
    activity = nullptr;
}

Bird::~Bird() {
    if (activity) {
    delete activity;
    activity = nullptr;
    }
}

void Bird::setActivity(SeasonActivity* newActivity) {
    if (activity) {
        delete activity;
        activity = nullptr;
    }
    activity = newActivity;
}

void Bird::cleanUp() {
    delete activity;
    activity = nullptr;
}

void Bird::performActivity() {
    activity->performActivity(name);
    cleanUp();
}

Fletchling::Fletchling() {
    name = "Fletchling";
    region = "Kalos";
    activity = nullptr;
}

Fletchling::~Fletchling() {
    if (activity) {
        delete activity;
        activity = nullptr;
    }
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
    activity = nullptr;
}

Rufflet::~Rufflet() {
    if (activity) {
        delete activity;
        activity = nullptr;
    }
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
    activity = nullptr;
}

PikiPek::~PikiPek() {
    if (activity) {
        delete activity;
        activity = nullptr;
    }
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
    activity = nullptr;
}

Starly::~Starly() {
    if (activity) {
        delete activity;
        activity = nullptr;
    }
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
