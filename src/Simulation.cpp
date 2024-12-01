#include "Simulation.hpp"

Simulation::~Simulation() {
    delete kalosFactory;
    delete unovaFactory;
}

void Simulation::Loop(){
    RegionFactory* kalosFactory = new KalosRegionFactory();
    RegionFactory* unovaFactory = new UnovaRegionFactory();

    std::vector<Bird*> birds = kalosFactory->createBird();
    for(int i = 0; i < birds.size(); i++) {
        birds[i]->allActivities();
    }
    for (Bird* bird : birds) {
        delete bird;
    }
    birds.clear();
}