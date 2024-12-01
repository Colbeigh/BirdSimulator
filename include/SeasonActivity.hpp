#ifndef SEASONACTIVITY_HPP
#define SEASONACTIVITY_HPP

#include <iostream>

class SeasonActivity {
public:
 SeasonActivity();
 virtual ~SeasonActivity();
 virtual void performActivity() = 0;
};

class FletchlingSpring : public SeasonActivity {
public:
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

class RuffletSpring : public SeasonActivity {
public:
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
