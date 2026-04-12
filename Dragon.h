//
// Created by Leo Asness on 2/21/26.
//

#ifndef M2OEP_DRAGON_H
#define M2OEP_DRAGON_H

#include "Adventurer.h"

class Dragon : public Adventurer {
public:
    /**
     * Requires: nothing
     * Modifies: cla, hp, attack, healing
     * Effects: calls parent default constructor
     */
    Dragon();

    /**
     * Requires: nothing
     * Modifies: cla, hp, attack, healing
     * Effects: calls parent non-default constructor
     */
    explicit Dragon(std::string n, int h, int a, int he);
};


#endif //M2OEP_DRAGON_H