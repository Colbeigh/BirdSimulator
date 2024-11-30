#ifndef REGIONFACTORY_HPP
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

class KalosRegionFactory {
public:
 RegionFactory();
 virtual ~RegionFactory();
 std::vector<bird*> createBird() override;
}

class UnovaRegionFactory {
public:
 RegionFactory();
 virtual ~RegionFactory();
 std::vector<bird*> createBird() override;
}


#endif
