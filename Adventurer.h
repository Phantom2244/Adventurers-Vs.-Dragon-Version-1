//
// Created by Leo Asness on 2/18/26.
//

#ifndef GITHUBREPOFORCAREERPREP_ADVENTURER_H
#define GITHUBREPOFORCAREERPREP_ADVENTURER_H

#include <string>
#include <iostream>

class Adventurer {
public:
    /**
         * Requires: nothing
         * Modifies: cla, hp, attack, healing
         * Effects: sets class = adventurer, HP = 100, Attack = 5, and Healing = 5
         */
    Adventurer();

    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects: does nothing
     */
    virtual ~Adventurer() = default;

    /**
     * Requires: nothing
     * Modifies: cla, hp, attack, healing
     * Effects: calls set_class, set_hp with h, set_attack with a, and set_healing with he
     */
    explicit Adventurer(std::string n, int h, int a, int he);

    /**
         * Requires: nothing
         * Modifies: nothing
         * Effects: returns cla
         */
    virtual std::string get_class() const;

    /**
         * Requires: nothing
         * Modifies: nothing
         * Effects: returns hp
         */
    virtual int get_hp() const;

    /**
             * Requires: nothing
             * Modifies: nothing
             * Effects: returns attack
             */
    virtual int get_attack() const;

    /**
             * Requires: nothing
             * Modifies: nothing
             * Effects: returns healing
             */
    virtual int get_healing() const;

     /**
         * Requires: nothing
         * Modifies: attack
         * Effects: sets attack to a if a is in range 1-20.
         *          otherwise sets attack to 20.
         */
     void set_class(std::string c);

    /**
         * Requires: nothing
         * Modifies: hp
         * Effects: sets hp to h if h is in range 1-100.
         *          otherwise sets hp to 100.
         */
    void set_hp(int h);

    /**
         * Requires: nothing
         * Modifies: attack
         * Effects: sets attack to a if a is in range 1-20.
         *          otherwise sets attack to 20.
         */
    void set_attack(int a);

     /**
         * Requires: nothing
         * Modifies: healing
         * Effects: sets healing to he if he is in range 1-40.
         *          otherwise sets hp to 40.
         */
     void set_healing(int he);

    /**
     * Requires: nothing
     * Modifies: hp
     * Effects: if hp is at least 1, decrements hp by attack_strength and returns true.
     *          if hp is <= 0 afterward, set hp = 0, set is_alive to false
     *          otherwise, if hp was already <= 0, print string ("They were already defeated!")
     */
    virtual bool harmed(int attack_strength);

    /**
     * Requires: nothing
     * Modifies: hp
     * Effects: if hp is at least 1, increments hp by healing_ability and returns true.
     *          if hp is >= MAX_HP afterward, set hp = MAX_HP
     *          otherwise, if hp was already >= 0, print string ("Can't heal the dead...")
     */
    virtual bool being_healed(int healing_ability);

    static const int MAX_HP = 100;
    static const int MAX_ATK = 20;
    static const int MAX_HEAL = 30;
protected:
    std::string cla;
    int hp;
    int attack;
    int healing;
    bool is_alive = true;
};


#endif //M2OEP_LASNESS_ADVENTURER_H