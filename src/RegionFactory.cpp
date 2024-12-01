#include "RegionFactory.hpp"

std::vector<Bird*> KalosRegionFactory::createBird() {
    std::vector<Bird*> birds;
    birds.push_back(new Fletchling());
    return birds;
}

std::vector<Bird*> UnovaRegionFactory::createBird() {
    std::vector<Bird*> birds;
    birds.push_back(new Rufflet());
    return birds;
}