#include "SeasonActivity.hpp"

SeasonActivityWithNest::SeasonActivityWithNest() {
    nestbuilder = nullptr;
}

SeasonActivityWithNest::~SeasonActivityWithNest() {
    if (nestbuilder) {
    delete nestbuilder;
    nestbuilder = nullptr;
    }
}

KalosianFletchlingSpring::KalosianFletchlingSpring() {
    if (nestbuilder) {
        delete nestbuilder;
        nestbuilder = nullptr;
    }
    nestbuilder = new KalosianFletchlingNestBuilder;
    nest = nestbuilder ->buildNest();
}

KalosianFletchlingSpring::~KalosianFletchlingSpring() {
    delete nestbuilder;
}

void KalosianFletchlingSpring::performActivity(std::string name) {
    std::cout << "\nSeason: Spring.\n";
    std::cout << "Migrating to Kanto.\n";
    nest.printNest();
    std::cout << name << " Is looking for a mate with " <<
    "silver feathers.\n";
}

void KalosianFletchlingSummer::performActivity(std::string name) {
    std::cout << "\nSeason: Summer\n";
    std::cout << name << " Is looking for apricots to eat.\n";
}

void KalosianFletchlingFall::performActivity(std::string name) {
    std::cout << "\nSeason: Fall.\n";
    std::cout << "Migrating to Galar.\n";
}

void KalosianFletchlingWinter::performActivity(std::string name) {
    std::cout << "\nSeason: Winter\n";
    std::cout << name << " has found a mate and has laid an egg.\n\n";
}

KalosianRuffletSpring::KalosianRuffletSpring() {
    if (nestbuilder) {
        delete nestbuilder;
        nestbuilder = nullptr;
    }
    nestbuilder = new KalosianRuffletNestBuilder;
    nest = nestbuilder ->buildNest();
}

KalosianRuffletSpring::~KalosianRuffletSpring() {
    if (nestbuilder) {
        delete nestbuilder;
        nestbuilder = nullptr;
    }
}

void KalosianRuffletSpring::performActivity(std::string name) {
    std::cout << "\nSeason: Spring.\n";
    std::cout << "Migrating to Johto.\n";
    nest.printNest();
    std::cout << name << " Is looking for a mate with " <<
    "steel wings.\n";
}

void KalosianRuffletSummer::performActivity(std::string name) {
    std::cout << "\nSeason: Summer.\n";
    std::cout << name << " has settled for a non steel " <<
    "winged bird.\n";
}

void KalosianRuffletFall::performActivity(std::string name) {
    std::cout << "\nSeason: Fall.\n";
    std::cout << name << " reluctantly mates and lays an egg.\n";
}

void KalosianRuffletWinter::performActivity(std::string name) {
    std::cout << "\nSeason: Winter.\n";
    std::cout << name << " Ditches its mate to find a steel " <<
    "winged bird\n";
    std::cout << "Migrated to Alola\n\n";
}


UnovanFletchlingSpring::UnovanFletchlingSpring() {
    if (nestbuilder) {
        delete nestbuilder;
        nestbuilder = nullptr;
    }
    nestbuilder = new UnovanFletchlingNestBuilder;
    nest = nestbuilder ->buildNest();
}

UnovanFletchlingSpring::~UnovanFletchlingSpring() {
    if (nestbuilder) {
        delete nestbuilder;
        nestbuilder = nullptr;
    }
}

void UnovanFletchlingSpring::performActivity(std::string name) {
    std::cout << "\nSeason: Spring.\n";
    std::cout << "Migrating to Galar.\n";
    nest.printNest();
    std::cout << name << " is looking for a mate that " <<
    "cannot fly.\n";
}

void UnovanFletchlingSummer::performActivity(std::string name) {
    std::cout << "\nSeason: Summer\n";
    std::cout << name << " Started a battle with a Diglett.\n";
    std::cout << name << " is tending its wounds.\n";
}

void UnovanFletchlingFall::performActivity(std::string name) {
    std::cout << "\nSeason: Fall.\n";
    std::cout << "Migrating to Hoenn.\n";
    std::cout << "Looking for a meal along the beach.\n";
}

void UnovanFletchlingWinter::performActivity(std::string name) {
    std::cout << "\nSeason: Winter\n";
    std::cout << name << " was caught by a trainer.\n\n";
}

UnovanRuffletSpring::UnovanRuffletSpring() {
    if (nestbuilder) {
        delete nestbuilder;
        nestbuilder = nullptr;
    }
    nestbuilder = new UnovanRuffletNestBuilder;
    nest = nestbuilder ->buildNest();
}

UnovanRuffletSpring::~UnovanRuffletSpring() {
    if (nestbuilder) {
        delete nestbuilder;
        nestbuilder = nullptr;
    }
}

void UnovanRuffletSpring::performActivity(std::string name) {
    std::cout << "\nSeason: Spring.\n";
    nest.printNest();
    std::cout << name << " Protects its flock from wild Pikachu\n";
}

void UnovanRuffletSummer::performActivity(std::string name) {
    std::cout << "\nSeason: Summer.\n";
    std::cout << name << " Teaches its flock how to fight\n";
}

void UnovanRuffletFall::performActivity(std::string name) {
    std::cout << "\nSeason: Fall.\n";
    std::cout << name << " gets injured fending off the " <<
    "wild Pikachu.\n";
}

void UnovanRuffletWinter::performActivity(std::string name) {
    std::cout << "\nSeason: Winter.\n";
    std::cout << name << " succumbs to its wounds \n\n";
}
