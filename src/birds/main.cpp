#include <iostream>
#include "Simulation.hpp"

int main() {
    Simulation* simulation;
    simulation->Loop();
    delete simulation;
    return 0;
}
