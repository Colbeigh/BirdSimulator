#include "NestBuilder.hpp"
NestBuilder::NestBuilder() {
    materials = {"NEws"};
}

Nest NestBuilder::buildNest(Nest nest) {
    for (int i = 0; i < materials.size(); i++) {
        nest.addMaterial(materials[i]);
    }
    return nest;
}

FletchlingNestBuilder::FletchlingNestBuilder() {
    materials = {"Newspaper"};
}

RuffletNestBuilder::RuffletNestBuilder() {
    materials = {"An Odd Branch",
    "Magical Leaves", "Grass"};
}

PikiPekNestBuilder::PikiPekNestBuilder() {
    materials = {"Moss", "Grass"};
}

StarlyNestBuilder::StarlyNestBuilder() {
    materials = {"Clay",
    "Bark", "Sticks (around 30cm)"};
}
