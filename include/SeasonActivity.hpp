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
 virtual void performActivity(std::string name) = 0;
 Nest nest;
 NestBuilder* nestbuilder;
};

class FletchlingSpring : public SeasonActivityWithNest {
public:
 FletchlingSpring();
 void performActivity(std::string name) override;
};

class FletchlingSummer : public SeasonActivity {
public:
 void performActivity(std::string name) override;
};

class FletchlingFall : public SeasonActivity {
public:
 void performActivity(std::string name) override;
};

class FletchlingWinter : public SeasonActivity {
public:
 void performActivity(std::string name) override;
};

class RuffletSpring : public SeasonActivityWithNest {
public:
 RuffletSpring();
 void performActivity(std::string name) override;
};

class RuffletSummer : public SeasonActivity {
public:
 void performActivity(std::string name) override;
};

class RuffletFall : public SeasonActivity {
public:
 void performActivity(std::string name) override;
};

class RuffletWinter : public SeasonActivity {
public:
 void performActivity(std::string name) override;
};

class PikiPekSpring : public SeasonActivityWithNest {
public:
 PikiPekSpring();
 void performActivity(std::string name) override;
};

class PikiPekSummer : public SeasonActivity {
public:
 void performActivity(std::string name) override;
};

class PikiPekFall : public SeasonActivity {
public:
 void performActivity(std::string name) override;
};

class PikiPekWinter : public SeasonActivity {
public:
 void performActivity(std::string name) override;
};

class StarlySpring : public SeasonActivityWithNest {
public:
 StarlySpring();
 void performActivity(std::string name) override;
};

class StarlySummer : public SeasonActivity {
public:
 void performActivity(std::string name) override;
};

class StarlyFall : public SeasonActivity {
public:
 void performActivity(std::string name) override;
};

class StarlyWinter : public SeasonActivity {
public:
 void performActivity(std::string name) override;
};

#endif
