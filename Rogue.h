//
// Created by Leo Asness on 2/21/26.
//

#ifndef M2OEP_ROGUE_H
#define M2OEP_ROGUE_H

#include "Adventurer.h"

class Rogue : public Adventurer {
public:
    /**
     * Requires: nothing
     * Modifies: cla, hp, attack, healing
     * Effects: calls parent default constructor
     */
    Rogue();

    /**
     * Requires: nothing
     * Modifies: cla, hp, attack, healing
     * Effects: calls parent non-default constructor
     */
    explicit Rogue(std::string n, int h, int a, int he);

    /**
         * Requires: nothing
         * Modifies: hp
         * Effects: sets hp to h if h is in range 1-90.
         *          otherwise sets hp to 90.
         */
    void set_hp(int h);

    /**
        * Requires: nothing
        * Modifies: healing
        * Effects: sets healing to he if he is in range 1-5.
        *          otherwise sets hp to 5.
        */
    void set_healing(int he);
};


#endif //M2OEP_ROGUE_H