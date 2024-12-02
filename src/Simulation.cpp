#include "Simulation.hpp"

Simulation::Simulation() {
    factory1 = new KalosRegionFactory();
    factory2 = new UnovaRegionFactory();
}

Simulation::~Simulation() {
    delete factory1;
    delete factory2;
}

void Simulation::Loop() {
    std::vector<Bird*> birds1 = factory1->createBird();
    for (Bird* bird : birds1) {
        bird->allActivities();
    }
    birds1.clear();
    delete birds1;

    for (Bird* bird : birds1) {
    delete bird;
    }
    birds1.clear();

    std::vector<Bird*> birds2 = factory2->createBird();
    for (Bird* bird : birds2) {
        bird->allActivities();
    }

    for (Bird* bird : birds2) {
    delete bird;
    }
    birds2.clear();
    delete birds2;
}
