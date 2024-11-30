#include "RegionFactory.hpp"

std::vector<bird*> KalosRegionFactory::createBird{
    std::vector<Bird*> birds;
    birds.push_back(new Fletchling())
    returns birds;
}

std::vector<bird*> UnovaRegionFactory::createBird{
    std::vector<Bird*> birds;
    birds.push_back(new Rufflet())
    returns birds;
}