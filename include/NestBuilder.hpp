#ifndef NESTBUILDER_HPP
#define NESTBUILDER_HPP

#include <iostream>
#include <string>
#include <vector>
#include "Nest.hpp"

class NestBuilder {
 public:
  NestBuilder();
  Nest buildNest();
  std::vector<std::string> materials;
};

class KalosianFletchlingNestBuilder : public NestBuilder {
 public:
  KalosianFletchlingNestBuilder();
};

class KalosianRuffletNestBuilder : public NestBuilder {
 public:
  KalosianRuffletNestBuilder();
};

class UnovanFletchlingNestBuilder : public NestBuilder {
 public:
  UnovanFletchlingNestBuilder();
};

class UnovanRuffletNestBuilder : public NestBuilder {
 public:
  UnovanRuffletNestBuilder();
};

#endif
