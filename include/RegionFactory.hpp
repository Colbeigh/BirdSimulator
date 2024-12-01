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
 virtual std::vector<Bird*> createBird();
};

class KalosRegionFactory : public RegionFactory {
public:
 KalosRegionFactory();
 virtual ~KalosRegionFactory();
 std::vector<Bird*> createBird() override;
};

class UnovaRegionFactory : public RegionFactory {
public:
 UnovaRegionFactory();
 virtual ~UnovaRegionFactory();
 std::vector<Bird*> createBird() override;
};


#endif
