//
// Created by Leo Asness on 2/21/26.
//

#include "Mage.h"

Mage::Mage() : Adventurer() {
    cla = "Mage";
    hp = 80;
    healing = 30;
}

Mage::Mage(std::string n, int h, int a, int he) : Adventurer() {
}

void Mage::set_hp(int h) {
    if (h < 1 || h > (MAX_HP-20)) {
        h = (MAX_HP-20);
    }
    hp = h;
}

void Mage::set_attack(int a) {
    if (a < 1 || a > (MAX_ATK-15)) {
        a = (MAX_ATK-15);
    }
    attack = a;
}