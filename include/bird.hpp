#ifndef BIRD_HPP
#define BIRD_HPP

#include <iostream>
#include <string>
#include "SeasonActivity.hpp"

class Bird {
public:
 Bird();
 virtual ~Bird();
 virtual void performActivity() = 0;
 Nest getNest();
 void setActivity(SeasonActivity* newActivity);
 virtual void allActivities() = 0;

 std::string name;
 SeasonActivity* activity;
};

class Fletchling : public Bird {
public:
 Fletchling();
 virtual ~Fletchling();
 void performActivity() override;
 void allActivities() override;
};

class Rufflet : public Bird {
public:
 Rufflet();
 virtual ~Rufflet();
 void performActivity() override;
 void allActivities() override;
};

#endif
