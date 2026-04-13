//
// Created by Leo Asness on 2/21/26.
//

#ifndef GITHUBREPOFORCAREERPREP_MAGE_H
#define GITHUBREPOFORCAREERPREP_MAGE_H

#include "Adventurer.h"

class Mage : public Adventurer {
public:
    /**
     * Requires: nothing
     * Modifies: cla, hp, attack, healing
     * Effects: calls parent default constructor
     */
    Mage();

    /**
     * Requires: nothing
     * Modifies: cla, hp, attack, healing
     * Effects: calls parent non-default constructor
     */
    explicit Mage(std::string n, int h, int a, int he);

    /**
         * Requires: nothing
         * Modifies: hp
         * Effects: sets hp to h if h is in range 1-80.
         *          otherwise sets hp to 80.
         */
    void set_hp(int h);

    /**
         * Requires: nothing
         * Modifies: attack
         * Effects: sets attack to a if a is in range 1-5.
         *          otherwise sets attack to 5.
         */
    void set_attack(int a);
};


#endif //M2OEP_MAGE_H