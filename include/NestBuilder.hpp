#ifndef NESTBUILDER_HPP
#define NESTBUILDER_HPP

#include <iostream>
#include <string>
#include <vector>
#include "Nest.hpp"

class NestBuilder {
public:
 NestBuilder();
 virtual ~NestBuilder();
 virtual void buildNest(Nest nest) =0;

 std::vector<std::string> materials;
};

#endif
