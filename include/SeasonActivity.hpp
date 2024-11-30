#ifndef SEASONACTIVITY_HPP
#define SEASONACTIVITY_HPP

#include <iostream>

class SeasonActivity {
public:
 SeasonActivity();
 virtual ~SeasonActivity();
 virtual void performActivity() = 0;
}

class FletchlingSpring {
public:
 void performActivity() override;
}

class FletchlingSummer {
public:
 void performActivity() override;
}

class FletchlingFall {
public:
 void performActivity() override;
}

class FletchlingWinter {
public:
 void performActivity() override;
}

#endif
