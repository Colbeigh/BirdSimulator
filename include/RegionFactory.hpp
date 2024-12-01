#ifndef REGIONFACTORY_HPP
#define REGIONFACTORY_HPP

#include <iostream>
#include <string>
#include <vector>
#include "Bird.hpp"

class RegionFactory {
 public:
  virtual std::vector<Bird*> createBird() = 0;
};

class KalosRegionFactory : public RegionFactory {
 public:
  std::vector<Bird*> createBird() override;
};

class UnovaRegionFactory : public RegionFactory {
 public:
  std::vector<Bird*> createBird() override;
};


#endif
