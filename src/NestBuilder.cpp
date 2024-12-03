#include "NestBuilder.hpp"
NestBuilder::NestBuilder() {}

Nest NestBuilder::buildNest() {
    Nest nest;
    for (int i = 0; i < materials.size(); i++) {
        nest.addMaterial(materials[i]);
    }
    return nest;
}

KalosianFletchlingNestBuilder::KalosianFletchlingNestBuilder() {
    materials = {"Newspaper"};
}

KalosianRuffletNestBuilder::KalosianRuffletNestBuilder() {
    materials = {"An Odd Branch",
    "Magical Leaves", "Grass"};
}

UnovanFletchlingNestBuilder::UnovanFletchlingNestBuilder() {
    materials = {"Moss", "Grass"};
}

UnovanRuffletNestBuilder::UnovanRuffletNestBuilder() {
    materials = {"Clay",
    "Bark", "Sticks (around 30cm)"};
}
