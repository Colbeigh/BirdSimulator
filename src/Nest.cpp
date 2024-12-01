#include "Nest.hpp"

void Nest::addMaterial(std::string material){
    materials.push_back(material);
}

void Nest::printNest(){
    if (materials.empty()) {
        std::cout << "There is no nest\n";
        return;
    }

    std::cout << "The nest is built of: ";
    for (int i = 0; i < materials.size(); i++) {
        if(i > 0 && i== materials.size() -1) {
            std::cout << " and ";
        } else if (i > 0) {
            std::cout << ", ";
        }
        std::cout << materials[i];
    }
    std::cout << ".\n";
}
