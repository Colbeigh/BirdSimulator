#ifndef BIRD_HPP
#define BIRD_HPP

#include <iostream>
#include <string>
#include "SeasonActivity.hpp"

class Bird {
 public:
  Bird();
  virtual ~Bird();
  void setActivity(SeasonActivity* newActivity);
  void performActivity();
  virtual void allActivities() = 0;

  std::string name;
  std::string region;
  SeasonActivity* activity;
};

class KalosianFletchling : public Bird {
 public:
  KalosianFletchling();
  virtual ~KalosianFletchling();
  void allActivities() override;
};

class KalosianRufflet : public Bird {
 public:
  KalosianRufflet();
  virtual ~KalosianRufflet();
  void allActivities() override;
};

class UnovanFletchling : public Bird {
 public:
  UnovanFletchling();
  virtual ~UnovanFletchling();
  void allActivities() override;
};

class UnovanRufflet : public Bird {
 public:
  UnovanRufflet();
  virtual ~UnovanRufflet();
  void allActivities() override;
};

#endif
