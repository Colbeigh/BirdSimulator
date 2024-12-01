#include "Simulation.hpp"

Simulation::Simulation() {
    factory1 = new KalosRegionFactory();
    factory2 = new UnovaRegionFactory();
}

Simulation::~Simulation() {
    delete factory1;
    delete factory2;
    for (Bird* bird : birds1) {
        delete bird;
    }
    birds1.clear();

    for (Bird* bird : birds2) {
        delete bird;
    }
    birds2.clear();
}

void Simulation::Loop() {
        birds1 = factory1->createBird();
        for (int i = 0; i < birds1.size(); i++) {
           birds1[i]->allActivities();
        }
        for (Bird* bird : birds1) {
            delete bird;
        }
        birds1.clear();

        birds2 = factory2->createBird();
        for (int i = 0; i < birds2.size(); i++) {
           birds2[i]->allActivities();
        }
        for (Bird* bird : birds2) {
            delete bird;
        }
        birds2.clear();
}
