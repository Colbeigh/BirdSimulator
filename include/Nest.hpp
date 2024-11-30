#ifndef NEST_HPP
#define NEST_HPP

#include <iostream>
#include <string>
#include <vector>

class Nest {
public:
 Nest();
 virtual ~Nest();
 void addMaterial (std::string material);
 void printNest();

 std::vector<std::string material> materials;
}

#endif