#ifndef WARRIOR_H
#define WARRIOR_H

#include"Hero.h"
class Warrior : public Hero {
    private :
    int armorRating;
    public:
    Warrior (string n ="Unknown",int hp = 120, 
            int pwr = 15, int armor = 5);
     ~Warrior();
    int getArmorRating() const;
    void setArmorRating(int armor);
    int calculateEffectiveHealth() const;        

};

#endif