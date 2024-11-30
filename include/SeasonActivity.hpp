#ifndef SEASONACTIVITY_HPP
#define SEASONACTIVITY_HPP

#include <iostream>

class SeasonActivity {
public:
 SeasonActivity();
 virtual ~SeasonActivity();
 virtual performActivity() = 0;
}

#endif
