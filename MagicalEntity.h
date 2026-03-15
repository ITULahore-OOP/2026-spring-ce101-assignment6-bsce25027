#ifndef MAGICALENTITY_H
#define MAGICALENTITY_H

#include "Hero.h"

class MagicalEntity : public Hero {
private:
    int manaPool;
    int spellPower;

public:
    MagicalEntity(string n = "Unknown", int hp = 80, 
                int pwr = 12, int mana = 50, int spell = 15);
    ~MagicalEntity();
    
    int getManaPool() const;
    int getSpellPower() const;
    void setManaPool(int mana);
    void setSpellPower(int spell);
};

#endif