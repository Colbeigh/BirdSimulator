#ifndef NEST_HPP
#define NEST_HPP

#include <iostream>
#include <string>
#include <vector>

class Nest {
 public:
  void addMaterial(const std::string& material);
  void printNest();

  std::vector<std::string> materials;
};

#endif
