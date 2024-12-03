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
  void setFactory(int input);
  void Loop();

    RegionFactory* factory;
    std::vector<Bird*> birds;
};
#endif
