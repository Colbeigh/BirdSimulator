#include "RegionFactory.hpp"

KalosRegionFactory::~KalosRegionFactory() {
    for (Bird* bird : birds) {
    delete bird;
    }
    birds.clear();
}

std::vector<Bird*> KalosRegionFactory::createBird() {
    birds.push_back(new Fletchling());
    birds.push_back(new PikiPek());
    return birds;
}

UnovaRegionFactory::~UnovaRegionFactory() {
    for (Bird* bird : birds) {
    delete bird;
    }
    birds.clear();
}

std::vector<Bird*> UnovaRegionFactory::createBird() {
    birds.push_back(new Rufflet());
    birds.push_back(new Starly());
    return birds;
}
