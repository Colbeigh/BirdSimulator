#include "SeasonActivity.hpp"

SeasonActivityWithNest::SeasonActivityWithNest() {
    nestbuilder = nullptr;
}

SeasonActivityWithNest::~SeasonActivityWithNest() {
    if (nestbuilder) {
    delete nestbuilder;
    }
}

FletchlingSpring::FletchlingSpring() {
    nestbuilder = new FletchlingNestBuilder;
    nest = nestbuilder ->buildNest();
}

FletchlingSpring::~FletchlingSpring() {
    delete nestbuilder;
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
    nest = nestbuilder ->buildNest();
}

RuffletSpring::~RuffletSpring() {
    delete nestbuilder;
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
    nest = nestbuilder ->buildNest();
}

PikiPekSpring::~PikiPekSpring() {
    delete nestbuilder;
}

void PikiPekSpring::performActivity(std::string name) {
    std::cout << "\nSeason: Spring.\n";
    std::cout << "Migrating to Galar.\n";
    nest.printNest();
    std::cout << name << " is looking for a mate that " <<
    "cannot fly.\n";
}

void PikiPekSummer::performActivity(std::string name) {
    std::cout << "\nSeason: Summer\n";
    std::cout << name << " Started a battle with a Diglett.\n";
    std::cout << name << " is tending its wounds.\n";
}

void PikiPekFall::performActivity(std::string name) {
    std::cout << "\nSeason: Fall.\n";
    std::cout << "Migrating to Hoenn.\n";
    std::cout << "Looking for a meal along the beach.\n";
}

void PikiPekWinter::performActivity(std::string name) {
    std::cout << "\nSeason: Winter\n";
    std::cout << name << " was caught by a trainer.\n\n";
}

StarlySpring::StarlySpring() {
    nestbuilder = new StarlyNestBuilder;
    nest = nestbuilder ->buildNest();
}

StarlySpring::~StarlySpring() {
    delete nestbuilder;
}

void StarlySpring::performActivity(std::string name) {
    std::cout << "\nSeason: Spring.\n";
    nest.printNest();
    std::cout << name << "Protects its flock from wild Pikachu\n";
}

void StarlySummer::performActivity(std::string name) {
    std::cout << "\nSeason: Summer.\n";
    std::cout << name << "Teaches its flock how to fight\n";
}

void StarlyFall::performActivity(std::string name) {
    std::cout << "\nSeason: Fall.\n";
    std::cout << name << " gets injured fending off the " <<
    "wild Pikachu.\n";
}

void StarlyWinter::performActivity(std::string name) {
    std::cout << "\nSeason: Winter.\n";
    std::cout << name << " succumbs to its wounds \n\n";
}
