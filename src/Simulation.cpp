#include "Simulation.hpp"

Simulation::Simulation() {
    factories.push_back(new KalosRegionFactory());
    factories.push_back(new UnovaRegionFactory());
}

Simulation::~Simulation() {
    for (RegionFactory* factory : factories) {
        delete factory;
    }
    
    for (Bird* bird : birds) {
        delete bird;
    }
}

void Simulation::Loop() {
    for (RegionFactory* factory : factories) {
        std::vector<Bird*> birds = factory->createBird();
        for (int i = 0; i < birds.size(); i++) {
           birds[i]->allActivities();
        }
        for (Bird* bird : birds) {
            delete bird;
        }
        birds.clear();
    }
}
