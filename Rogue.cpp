//
// Created by Leo Asness on 2/21/26.
//

#include "Rogue.h"

Rogue::Rogue() : Adventurer() {
    cla = "Rogue";
    hp = 90;
    attack = 20;
}

Rogue::Rogue(std::string n, int h, int a, int he) : Adventurer() {
}

void Rogue::set_hp(int h) {
    if (h < 1 || h > (MAX_HP-10)) {
        h = (MAX_HP-10);
    }
    hp = h;
}

void Rogue::set_healing(int h) {
    if (h < 1 || h > (MAX_HEAL-25)) {
        h = (MAX_HEAL-25);
    }
    healing = h;
}