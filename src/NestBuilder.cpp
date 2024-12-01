#include "NestBuilder.hpp"

void FletchlingNestBuilder::buildNest(Nest& nest) {
    std::vector<std::string> materials = {"fletchMaterial 1",
    "fletchMaterial 2", "fletchMaterial 3"};
    for (int i = 0; i < materials.size(); i++) {
        nest.addMaterial(materials[i]);
    }
}

void RuffletNestBuilder::buildNest(Nest& nest) {
    std::vector<std::string> materials = {"RufMaterial 1",
    "RufMaterial 2", "RufMaterial 3"};
    for (int i = 0; i < materials.size(); i++) {
        nest.addMaterial(materials[i]);
    }
}
