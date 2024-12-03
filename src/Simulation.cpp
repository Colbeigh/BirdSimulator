#include "Simulation.hpp"

Simulation::Simulation() {}

Simulation::~Simulation() {
    delete factory;
    for (Bird* bird : birds) {
    delete bird;
    }
    birds.clear();
}

void Simulation::setFactory(int input) {
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
    delete factory;
}
