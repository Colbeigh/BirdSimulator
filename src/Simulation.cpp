#include "Simulation.hpp"

Simulation::Simulation() {
    factory1 = new KalosRegionFactory();
    factory2 = new UnovaRegionFactory();
}

Simulation::~Simulation() {
    for (Bird* bird : birds1) {
        delete bird;
    }
    birds1.clear();

    for (Bird* bird : birds2) {
        delete bird;
    }
    birds2.clear();
    delete factory1;
    delete factory2;
}

void Simulation::Loop() {
    birds1 = factory1->createBird();
    for (Bird* bird : birds1) {
        bird->allActivities();
    }

    for (Bird* bird : birds1) {
        delete bird;
    }
    birds1.clear();

    birds2 = factory2->createBird();
    for (Bird* bird : birds2) {
        bird->allActivities();
    }

    for (Bird* bird : birds2) {
        delete bird;
    }
    birds2.clear();
}
