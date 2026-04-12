//
// Created by Leo Asness on 2/21/26.
//

#include "Dragon.h"

Dragon::Dragon() : Adventurer() {
    cla = "Dragon";
    hp = MAX_HP * 2;
    attack = 20;
}

Dragon::Dragon(std::string n, int h, int a, int he) : Adventurer() {
}