#include "RegionFactory.hpp"

std::vector<Bird*> KalosRegionFactory::createBird() {
    return {new KalosianFletchling(), new KalosianRufflet()};
}

std::vector<Bird*> UnovaRegionFactory::createBird() {
    return {new UnovanFletchling(), new UnovanRufflet()};
}
