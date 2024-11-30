#ifndef BIRD_HPP
#define BIRD_HPP

#include <iostream>
#include <string>
#include "SeasonActivity.hpp"
#include "NestBuilder.hpp"
#include "Nest.hpp"

class Bird {
public:
 bird();
 virtual ~bird();
 virtual void performActivity() = 0;
 virtual void buildNest() = 0;
 Nest* getNest();
 void setActivity(SeasonActivity* newActivity);
 void allActivities();
}
#endif
