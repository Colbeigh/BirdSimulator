#include "RegionFactory.hpp"

std::vector<Bird*> KalosRegionFactory::createBird() {
    std::vector<Bird*> birds;
    birds.push_back(new Fletchling());
    birds.push_back(new PikiPek());
    return birds;
}

std::vector<Bird*> UnovaRegionFactory::createBird() {
    std::vector<Bird*> birds;
    birds.push_back(new Rufflet());
    birds.push_back(new Starly());
    return birds;
}