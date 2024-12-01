#include "Simulation.hpp"

Simulation::Simulation() {
    factory1 = new KalosRegionFactory();
    factory2 = new UnovaRegionFactory();
}

Simulation::~Simulation() {
    delete factory1;
    delete factory2;

    for (Bird* bird : birds) {
    delete bird;
    }
    birds.clear();
}

void Simulation::Loop() {
    std::vector<Bird*> birds1 = factory1->createBird();
    birds.insert(birds.end(), birds1.begin(), birds1.end());
    for (Bird* bird : birds1) {
        bird->allActivities();
    }

    std::vector<Bird*> birds2 = factory2->createBird();
    birds.insert(birds.end(), birds2.begin(), birds2.end());
    for (Bird* bird : birds2) {
        bird->allActivities();
    }
}
