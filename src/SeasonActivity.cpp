#include "SeasonActivity.hpp"

FletchlingSpring::FletchlingSpring() {
    nestbuilder = new FletchlingNestBuilder;
    nestbuilder ->buildNest(nest);
}

void FletchlingSpring::performActivity() {
    std::cout << "Fletchling Spring Activity\n";
    nest.printNest();
}

void FletchlingSummer::performActivity() {
    std::cout << "Fletchling Summer Activity\n";
}

void FletchlingFall::performActivity() {
    std::cout << "Fletchling Fall Activity\n";
}

void FletchlingWinter::performActivity() {
    std::cout << "Fletchling Winter Activity\n";
}

RuffletSpring::RuffletSpring() {
    nestbuilder = new RuffletNestBuilder;
    nestbuilder ->buildNest(nest);
}

void RuffletSpring::performActivity() {
    std::cout << "Rufflet Spring Activity\n";
    nest.printNest();
}

void RuffletSummer::performActivity() {
    std::cout << "Rufflet Summer Activity\n";
}

void RuffletFall::performActivity() {
    std::cout << "Ruffletg Fall Activity\n";
}

void RuffletWinter::performActivity() {
    std::cout << "Rufflet Winter Activity\n";
}
