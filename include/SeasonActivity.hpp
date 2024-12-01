#ifndef SEASONACTIVITY_HPP
#define SEASONACTIVITY_HPP

#include <iostream>
#include "NestBuilder.hpp"
#include "Nest.hpp"

class SeasonActivity {
public:
 virtual void performActivity() = 0;
};

class SeasonActivityWithNest : public SeasonActivity {
public:
 virtual void performActivity() = 0;
 Nest nest;
 NestBuilder* nestbuilder;
};

class FletchlingSpring : public SeasonActivityWithNest {
public:
 FletchlingSpring();
 void performActivity() override;
};

class FletchlingSummer : public SeasonActivity {
public:
 void performActivity() override;
};

class FletchlingFall : public SeasonActivity {
public:
 void performActivity() override;
};

class FletchlingWinter : public SeasonActivity {
public:
 void performActivity() override;
};

class RuffletSpring : public SeasonActivityWithNest {
public:
 RuffletSpring();
 void performActivity() override;
};

class RuffletSummer : public SeasonActivity {
public:
 void performActivity() override;
};

class RuffletFall : public SeasonActivity {
public:
 void performActivity() override;
};

class RuffletWinter : public SeasonActivity {
public:
 void performActivity() override;
};

#endif
