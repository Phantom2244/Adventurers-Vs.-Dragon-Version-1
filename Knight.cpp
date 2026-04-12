//
// Created by Leo Asness on 2/21/26.
//

#include "Knight.h"

Knight::Knight() : Adventurer() {
    cla = "Knight";
    attack = 10;
}

Knight::Knight(std::string n, int h, int a, int he) : Adventurer() {
}

void Knight::set_attack(int a) {
    if (a < 1 || a > (MAX_ATK-10)) {
        a = (MAX_ATK-10);
    }
    attack = a;
}

void Knight::set_healing(int h) {
    if (h < 1 || h > (MAX_HEAL-25)) {
        h = (MAX_HEAL-25);
    }
    healing = h;
}