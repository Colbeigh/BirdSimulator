#ifndef REGIONFACTORY_HPP
#define REGIONFACTORY_HPP

#include <iostream>
#include <string>
#include <vector>
#include "Bird.hpp"

class RegionFactory {
 public:
  virtual std::vector<Bird*> createBird() = 0;
  std::vector<Bird*> birds;
};

class KalosRegionFactory : public RegionFactory {
 public:
  virtual ~KalosRegionFactory();
  std::vector<Bird*> createBird() override;
  std::vector<Bird*> birds;
};

class UnovaRegionFactory : public RegionFactory {
 public:
  virtual ~ UnovaRegionFactory();
  std::vector<Bird*> createBird() override;
  std::vector<Bird*> birds;
};


#endif
