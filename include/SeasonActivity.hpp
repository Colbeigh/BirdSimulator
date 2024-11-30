#ifndef SEASONACTIVITY_HPP
#define SEASONACTIVITY_HPP

#include <iostream>

class SeasonActivity {
public:
 SeasonActivity();
 virtual ~SeasonActivity();
 virtual performActivity() = 0;
}

class FletchlingSpring {
public:
 virtual performActivity(){
    std:: cout << ""
 }
}

class FletchlingSummer {
public:
 virtual performActivity(){
    std:: cout << ""
 }
}

class FletchlingFall {
public:
 virtual performActivity(){
    std:: cout << ""
 }
}

class FletchlingWinter {
public:
 virtual performActivity(){
    std:: cout << ""
 }
}

#endif
