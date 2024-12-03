#include <iostream>
#include "Simulation.hpp"

int main() {
    Simulation simulation;
    int userinput;

    while (true) {
        std::cout << "Please pick a region)\n";
        std::cout << "1.) Kalos\n";
        std::cout << "2.) Unova\n";
        std::cout << "3.) Exit\n";
        std::cin >> userinput;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Invalid input. Please enter an" <<
            "integer between 1 and 3\n Exiting";
            return 0;
        }
        if (userinput < 1 || userinput > 3) {
           std::cout << "Invalid input. Please enter an" <<
           "integer between 1 and 3\n Exiting";
           return 0;
        }
        switch (userinput) {
        case 1:
        case 2:
            simulation.setFactory(userinput);
            simulation.Loop();
                break;
        case 3:
            std::cout << "Exiting\n";
            return 0;
        }
    }
    return 0;
}
