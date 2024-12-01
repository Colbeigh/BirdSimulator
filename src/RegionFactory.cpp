#include "RegionFactory.hpp"

std::vector<Bird*> KalosRegionFactory::createBird() {
    return {new Fletchling(), new PikiPek()};
}

std::vector<Bird*> UnovaRegionFactory::createBird() {
    return {new Rufflet(), new Starly()};
}
