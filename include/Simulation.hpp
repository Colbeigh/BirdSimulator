#ifndef SIMULATION_HPP
#define SIMULATION_HPP

#include <iostream>
#include "Bird.hpp"
#include "RegionFactory.hpp"

class Simulation {
public:
 virtual ~Simulation();
 void Loop();

 RegionFactory* kalosFactory;
 RegionFactory* unovaFactory;
};
#endif
