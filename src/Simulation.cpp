#include "Simulation.hpp"

Simulation::Simulation() {
    factory = nullptr;
}

Simulation::~Simulation() {
    if (factory) {
        delete factory;
        factory = nullptr;
    }
    for (Bird* bird : birds) {
    delete bird;
    }
    birds.clear();
}

void Simulation::setFactory(int input) {
    if (factory) {
        delete factory;
        factory = nullptr;
    }

    if (input == 1) {
        factory = new KalosRegionFactory;
    } else {
        factory = new UnovaRegionFactory;
    }
}
void Simulation::Loop() {
    birds = factory->createBird();
    for (Bird* bird : birds) {
        bird->allActivities();
    }

    for (Bird* bird : birds) {
    delete bird;
    }
    birds.clear();
}
