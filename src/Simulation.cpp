#include "Simulation.hpp"

void Simulation::Loop(){
    RegionFactory* kalosFactory = new KalosRegionFactory();
    RegionFactory* unovaFactory = new UnovaRegionFactory();

    std::vector<Bird*> birds = kalosFactory->createBird();
    for(int i = 0; i < birds.size(); i++) {
        birds[i]->allActivities();
    }
}