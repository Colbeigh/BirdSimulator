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

void Bird::performActivity() {
    activity->performActivity(name);
}

KalosianFletchling::KalosianFletchling() {
    name = "Kalosian Fletchling";
    activity = nullptr;
}

KalosianFletchling::~KalosianFletchling() {
    if (activity) {
        delete activity;
        activity = nullptr;
    }
}

void KalosianFletchling::allActivities() {
    std::cout <<"----- " << name <<" -----\n";

    setActivity(new KalosianFletchlingSpring());
    performActivity();

    setActivity(new KalosianFletchlingSummer());
    performActivity();

    setActivity(new KalosianFletchlingFall());
    performActivity();

    setActivity(new KalosianFletchlingWinter());
    performActivity();
}


KalosianRufflet::KalosianRufflet() {
    name = "Kalosian Rufflet";
    activity = nullptr;
}

KalosianRufflet::~KalosianRufflet() {
    if (activity) {
        delete activity;
        activity = nullptr;
    }
}

void KalosianRufflet::allActivities() {
    std::cout <<"----- " << name <<" -----\n";

    setActivity(new KalosianRuffletSpring());
    performActivity();

    setActivity(new KalosianRuffletSummer());
    performActivity();

    setActivity(new KalosianRuffletFall());
    performActivity();

    setActivity(new KalosianRuffletWinter());
    performActivity();
}

UnovanFletchling::UnovanFletchling() {
    name = "Unovan Fletchling";
    activity = nullptr;
}

UnovanFletchling::~UnovanFletchling() {
    if (activity) {
        delete activity;
        activity = nullptr;
    }
}

void UnovanFletchling::allActivities() {
    std::cout <<"----- " << name <<" -----\n";
    setActivity(new UnovanFletchlingSpring());
    performActivity();

    setActivity(new UnovanFletchlingSummer());
    performActivity();

    setActivity(new UnovanFletchlingFall());
    performActivity();

    setActivity(new UnovanFletchlingWinter());
    performActivity();
}


UnovanRufflet::UnovanRufflet() {
    name = "Unovan Rufflet";
    activity = nullptr;
}

UnovanRufflet::~UnovanRufflet() {
    if (activity) {
        delete activity;
        activity = nullptr;
    }
}

void UnovanRufflet::allActivities() {
    std::cout <<"----- " << name <<" -----\n";

    setActivity(new UnovanRuffletSpring());
    performActivity();

    setActivity(new UnovanRuffletSummer());
    performActivity();

    setActivity(new UnovanRuffletFall());
    performActivity();

    setActivity(new UnovanRuffletWinter());
    performActivity();
}
