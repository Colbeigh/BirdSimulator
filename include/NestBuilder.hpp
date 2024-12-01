#ifndef NESTBUILDER_HPP
#define NESTBUILDER_HPP

#include <iostream>
#include <string>
#include <vector>
#include "Nest.hpp"

class NestBuilder {
 public:
  NestBuilder();
  Nest buildNest(Nest& nest);
  std::vector<std::string> materials;
};

class FletchlingNestBuilder : public NestBuilder {
 public:
  FletchlingNestBuilder();
};

class RuffletNestBuilder : public NestBuilder {
 public:
  RuffletNestBuilder();
};

class PikiPekNestBuilder : public NestBuilder {
 public:
  PikiPekNestBuilder();
};

class StarlyNestBuilder : public NestBuilder {
 public:
  StarlyNestBuilder();
};

#endif
