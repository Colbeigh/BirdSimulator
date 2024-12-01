#include "RegionFactory.hpp"

KalosRegionFactory::~KalosRegionFactory() {
    for (Bird* bird : birds) {
    delete bird;
    }
}

std::vector<Bird*> KalosRegionFactory::createBird() {
    std::vector<Bird*> birds;
    birds.push_back(new Fletchling());
    birds.push_back(new PikiPek());
    return birds;
}

UnovaRegionFactory::~UnovaRegionFactory() {
    for (Bird* bird : birds) {
    delete bird;
    }
}

std::vector<Bird*> UnovaRegionFactory::createBird() {
    std::vector<Bird*> birds;
    birds.push_back(new Rufflet());
    birds.push_back(new Starly());
    return birds;
}
