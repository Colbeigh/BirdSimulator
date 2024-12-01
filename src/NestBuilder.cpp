#include "NestBuilder.hpp"

Nest FletchlingNestBuilder::buildNest(Nest& nest) {
    std::vector<std::string> materials = {"Newspaper"};
    for (int i = 0; i < materials.size(); i++) {
        nest.addMaterial(materials[i]);
    }
    return nest;
}

Nest RuffletNestBuilder::buildNest(Nest& nest) {
    std::vector<std::string> materials = {"An Odd Branch",
    "Magical Leaves", "Grass"};
    for (int i = 0; i < materials.size(); i++) {
        nest.addMaterial(materials[i]);
    }
    return nest;
}

Nest PikiPekNestBuilder::buildNest(Nest& nest) {
    std::vector<std::string> materials = {"Moss", "Grass"};
    for (int i = 0; i < materials.size(); i++) {
        nest.addMaterial(materials[i]);
    }
    return nest;
}

Nest StarlyNestBuilder::buildNest(Nest& nest) {
    std::vector<std::string> materials = {"Clay",
    "Bark", "Sticks (around 30cm)"};
    for (int i = 0; i < materials.size(); i++) {
        nest.addMaterial(materials[i]);
    }
    return nest;
}
