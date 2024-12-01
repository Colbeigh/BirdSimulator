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
  void cleanUp();
  void performActivity();
  virtual void allActivities() = 0;

  std::string name;
  std::string region;
  SeasonActivity* activity;
};

class Fletchling : public Bird {
 public:
  Fletchling();
  virtual ~Fletchling();
  void allActivities() override;
};

class Rufflet : public Bird {
 public:
  Rufflet();
  virtual ~Rufflet();
  void allActivities() override;
};

class PikiPek : public Bird {
 public:
  PikiPek();
  virtual ~PikiPek();
  void allActivities() override;
};

class Starly : public Bird {
 public:
  Starly();
  virtual ~Starly();
  void allActivities() override;
};

#endif