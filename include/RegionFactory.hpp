#ifndef BIRD_HPP
#define REGIONFACTORY_HPP

#include <iostream>
#include <string>
#include "Bird.hpp"

class RegionFactory {
public:
 RegionFactory();
 virtual ~RegionFactory();
 virtual bird* createBird();

}

#endif
