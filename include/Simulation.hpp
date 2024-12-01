#ifndef SIMULATION_HPP
#define SIMULATION_HPP

#include <iostream>
#include <vector>
#include "Bird.hpp"
#include "RegionFactory.hpp"

class Simulation {
 public:
  Simulation();
  virtual ~Simulation();
  void Loop();

    RegionFactory* factory1;
    RegionFactory* factory2;
    std::vector<Bird*> birds1;
    std::vector<Bird*> birds2;
};
#endif
