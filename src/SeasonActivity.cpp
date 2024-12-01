#include "SeasonActivity.hpp"

FletchlingSpring::FletchlingSpring() {
    nestbuilder = new FletchlingNestBuilder;
    nestbuilder ->buildNest(nest);
}

void FletchlingSpring::performActivity(std::string name) {
    std::cout << "\nSeason: Spring\n";
    std::cout << "Fletchling Spring Activity\n";
    nest.printNest();
}

void FletchlingSummer::performActivity(std::string name) {
    std::cout << "\nSeason: Summer\n";
    std::cout << "Fletchling Summer Activity\n";
}

void FletchlingFall::performActivity(std::string name) {
    std::cout << "\nSeason: Fall\n";
    std::cout << "Fletchling Fall Activity\n";
}

void FletchlingWinter::performActivity(std::string name) {
    std::cout << "\nSeason: Winter\n";
    std::cout << "Fletchling Winter Activity\n";
}

RuffletSpring::RuffletSpring() { 
    nestbuilder = new RuffletNestBuilder;
    nestbuilder ->buildNest(nest);
}

void RuffletSpring::performActivity(std::string name) {
    std::cout << "\nSeason: Spring\n";
    std::cout << "Rufflet Spring Activity\n";
    nest.printNest();
}

void RuffletSummer::performActivity(std::string name) {
    std::cout << "\nSeason: Summer\n";
    std::cout << "Rufflet Summer Activity\n";
}

void RuffletFall::performActivity(std::string name) {
    std::cout << "\nSeason: Fallr\n";
    std::cout << "Ruffletg Fall Activity\n";
}

void RuffletWinter::performActivity(std::string name) {
    std::cout << "\nSeason: Winter\n";
    std::cout << "Rufflet Winter Activity\n";
}
