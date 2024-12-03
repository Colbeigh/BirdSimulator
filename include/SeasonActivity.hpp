#ifndef SEASONACTIVITY_HPP
#define SEASONACTIVITY_HPP

#include <iostream>
#include <string>
#include "NestBuilder.hpp"
#include "Nest.hpp"

class SeasonActivity {
 public:
  virtual void performActivity(std::string name) = 0;
};

class SeasonActivityWithNest : public SeasonActivity {
 public:
  SeasonActivityWithNest();
  virtual ~SeasonActivityWithNest();
  virtual void performActivity(std::string name) = 0;
  Nest nest;
  NestBuilder* nestbuilder;
};

class KalosianFletchlingSpring : public SeasonActivityWithNest {
 public:
  KalosianFletchlingSpring();
  virtual ~KalosianFletchlingSpring();
  void performActivity(std::string name) override;
};

class KalosianFletchlingSummer : public SeasonActivity {
 public:
  void performActivity(std::string name) override;
};

class KalosianFletchlingFall : public SeasonActivity {
 public:
  void performActivity(std::string name) override;
};

class KalosianFletchlingWinter : public SeasonActivity {
 public:
  void performActivity(std::string name) override;
};

class KalosianRuffletSpring : public SeasonActivityWithNest {
 public:
  KalosianRuffletSpring();
  virtual ~KalosianRuffletSpring();
  void performActivity(std::string name) override;
};

class KalosianRuffletSummer : public SeasonActivity {
 public:
  void performActivity(std::string name) override;
};

class KalosianRuffletFall : public SeasonActivity {
 public:
  void performActivity(std::string name) override;
};

class KalosianRuffletWinter : public SeasonActivity {
 public:
  void performActivity(std::string name) override;
};

class UnovanFletchlingSpring : public SeasonActivityWithNest {
 public:
  UnovanFletchlingSpring();
  virtual ~UnovanFletchlingSpring();
  void performActivity(std::string name) override;
};

class UnovanFletchlingSummer : public SeasonActivity {
 public:
  void performActivity(std::string name) override;
};

class UnovanFletchlingFall : public SeasonActivity {
 public:
  void performActivity(std::string name) override;
};

class UnovanFletchlingWinter : public SeasonActivity {
 public:
  void performActivity(std::string name) override;
};

class UnovanRuffletSpring : public SeasonActivityWithNest {
 public:
  UnovanRuffletSpring();
  virtual ~UnovanRuffletSpring();
  void performActivity(std::string name) override;
};

class UnovanRuffletSummer : public SeasonActivity {
 public:
  void performActivity(std::string name) override;
};

class UnovanRuffletFall : public SeasonActivity {
 public:
  void performActivity(std::string name) override;
};

class UnovanRuffletWinter : public SeasonActivity {
 public:
  void performActivity(std::string name) override;
};

#endif
