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

 std::vector<RegionFactory*> factories;
};
#endif
