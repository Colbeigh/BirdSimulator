#include "SeasonActivity.hpp"

FletchlingSpring::FletchlingSpring() {
    nestbuilder = new FletchlingNestBuilder;
    nestbuilder ->buildNest(nest);
}

void FletchlingSpring::performActivity(std::string name) {
    std::cout << "\nSeason: Spring.\n";
    std::cout << "Migrating to Kanto.\n";
    nest.printNest();
    std::cout << name << " Is looking for a mate with " <<
    "silver feathers.\n";
}

void FletchlingSummer::performActivity(std::string name) {
    std::cout << "\nSeason: Summer\n";
    std::cout << name << " Is looking for apricots to eat.\n";
}

void FletchlingFall::performActivity(std::string name) {
    std::cout << "\nSeason: Fall.\n";
    std::cout << "Migrating to Galar.\n";
}

void FletchlingWinter::performActivity(std::string name) {
    std::cout << "\nSeason: Winter\n";
    std::cout << name << " has found a mate and has laid an egg.\n\n";
}

RuffletSpring::RuffletSpring() { 
    nestbuilder = new RuffletNestBuilder;
    nestbuilder ->buildNest(nest);
}

void RuffletSpring::performActivity(std::string name) {
    std::cout << "\nSeason: Spring.\n";
    std::cout << "Migrating to Johto.\n";
    nest.printNest();
    std::cout << name << " Is looking for a mate with " <<
    "steel wings.\n";
}

void RuffletSummer::performActivity(std::string name) {
    std::cout << "\nSeason: Summer.\n";
    std::cout << name << " has settled for a non steel " <<
    "winged bird.\n";
}

void RuffletFall::performActivity(std::string name) {
    std::cout << "\nSeason: Fall.\n";
    std::cout << name << " reluctantly mates and lays an egg.\n";
}

void RuffletWinter::performActivity(std::string name) {
    std::cout << "\nSeason: Winter.\n";
    std::cout << name << " Ditches its mate to find a steel " <<
    "winged bird\n";
    std::cout << "Migrated to Alola\n\n";
}


PikiPekSpring::PikiPekSpring() {
    nestbuilder = new PikiPekNestBuilder;
    nestbuilder ->buildNest(nest);
}

void PikiPekSpring::performActivity(std::string name) {
    std::cout << "\nSeason: Spring.\n";
    std::cout << "Migrating to Kanto.\n";
    nest.printNest();
    std::cout << name << " Is looking for a mate with " <<
    "silver feathers.\n";
}

void PikiPekSummer::performActivity(std::string name) {
    std::cout << "\nSeason: Summer\n";
    std::cout << name << " Is looking for apricots to eat.\n";
}

void PikiPekFall::performActivity(std::string name) {
    std::cout << "\nSeason: Fall.\n";
    std::cout << "Migrating to Galar.\n";
}

void PikiPekWinter::performActivity(std::string name) {
    std::cout << "\nSeason: Winter\n";
    std::cout << name << " has found a mate and has laid an egg.\n\n";
}

StarlySpring::StarlySpring() { 
    nestbuilder = new StarlyNestBuilder;
    nestbuilder ->buildNest(nest);
}

void StarlySpring::performActivity(std::string name) {
    std::cout << "\nSeason: Spring.\n";
    std::cout << "Migrating to Johto.\n";
    nest.printNest();
    std::cout << name << " Is looking for a mate with " <<
    "steel wings.\n";
}

void StarlySummer::performActivity(std::string name) {
    std::cout << "\nSeason: Summer.\n";
    std::cout << name << " has settled for a non steel " <<
    "winged bird.\n";
}

void StarlyFall::performActivity(std::string name) {
    std::cout << "\nSeason: Fall.\n";
    std::cout << name << " reluctantly mates and lays an egg.\n";
}

void StarlyWinter::performActivity(std::string name) {
    std::cout << "\nSeason: Winter.\n";
    std::cout << name << " Ditches its mate to find a steel " <<
    "winged bird\n";
    std::cout << "Migrated to Alola\n\n";
}
