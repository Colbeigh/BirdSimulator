#ifndef NESTBUILDER_HPP
#define NESTBUILDER_HPP

#include <iostream>
#include <string>
#include <vector>
#include "Nest.hpp"

class NestBuilder {
public:
 virtual Nest buildNest(Nest& nest) = 0;

 std::vector<std::string> materials;
};

class FletchlingNestBuilder : public NestBuilder {
public:
 Nest buildNest(Nest& nest) override;
 std::vector<std::string> materials;
};

class RuffletNestBuilder : public NestBuilder {
public:
 Nest buildNest(Nest& nest) override;
 std::vector<std::string> materials;
};

class PikiPekNestBuilder : public NestBuilder {
public:
 Nest buildNest(Nest& nest) override;
 std::vector<std::string> materials;
};

class StarlyNestBuilder : public NestBuilder {
public:
 Nest buildNest(Nest& nest) override;
 std::vector<std::string> materials;
};

#endif
