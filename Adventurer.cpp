//
// Created by Leo Asness on 2/18/26.
//

#include "Adventurer.h"

Adventurer::Adventurer() {
    cla = "Adventurer";
    hp = 100;
    attack = 5;
    healing = 5;
}

Adventurer::Adventurer(std::string c, int h, int a, int he) {
    set_class(c);
    set_hp(h);
    set_attack(a);
    set_healing(he);
}

std::string Adventurer::get_class() const {
    return cla;
}

int Adventurer::get_hp() const {
    return hp;
}

int Adventurer::get_attack() const {
    return attack;
}

int Adventurer::get_healing() const {
    return healing;
}

void Adventurer::set_class(std::string c) {
    cla = c;
}

void Adventurer::set_hp(int h) {
    if (h < 1 || h > MAX_HP) {
        h = MAX_HP;
    }
    hp = h;
}

void Adventurer::set_attack(int a) {
    if (a < 1 || a > MAX_ATK) {
        a = MAX_ATK;
    }
    attack = a;
}

void Adventurer::set_healing(int h) {
    if (h < 1 || h > MAX_HEAL) {
        h = MAX_HEAL;
    }
    healing = h;
}

bool Adventurer::harmed(int attack_strength) {
    if (hp >= 1) {
        hp -= attack_strength;
        std::cout << cla + " has been dealt " + std::to_string(attack_strength) + " damage!" << std::endl;
        if (hp <= 0) {
            hp = 0;
            std::cout << cla + " has been defeated!" << std::endl;
        }
        return true;
    }
    std::cout << cla + " has already been defeated!" << std::endl;
    return false;
}

bool Adventurer::being_healed(int healing_ability) {
    if (hp >= 1) {
        hp += healing_ability;
        std::cout << cla + " has been healed " + std::to_string(healing_ability) + " HP!" << std::endl;
        if (hp >= MAX_HP) {
            std::cout << cla + " is at max HP!" << std::endl;
        }
        return true;
    }
    std::cout << cla + " has already been defeated!";
    return false;
}