//
// Created by Leo Asness on 2/21/26.
//

#ifndef M2OEP_KNIGHT_H
#define M2OEP_KNIGHT_H

#include "Adventurer.h"

class Knight : public Adventurer {
public:
    /**
     * Requires: nothing
     * Modifies: cla, hp, attack, healing
     * Effects: calls parent default constructor
     */
    Knight();

    /**
     * Requires: nothing
     * Modifies: cla, hp, attack, healing
     * Effects: calls parent non-default constructor
     */
    explicit Knight(std::string n, int h, int a, int he);

    /**
         * Requires: nothing
         * Modifies: attack
         * Effects: sets attack to a if a is in range 1-10.
         *          otherwise sets attack to 10.
         */
    void set_attack(int a);

    /**
        * Requires: nothing
        * Modifies: healing
        * Effects: sets healing to he if he is in range 1-5.
        *          otherwise sets hp to 5.
        */
    void set_healing(int he);
};


#endif //M2OEP_KNIGHT_H