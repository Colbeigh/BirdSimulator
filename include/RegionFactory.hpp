#ifndef BIRD_HPP
#define REGIONFACTORY_HPP

#include <iostream>
#include <string>
#include <vector>
#include "Bird.hpp"

class RegionFactory {
public:
 RegionFactory();
 virtual ~RegionFactory();
 virtual std::vector<bird*> createBird();
}

#endif
