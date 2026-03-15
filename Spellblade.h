#ifndef SPELLBLADE_H
#define SPELLBLADE_H

#include "Warrior.h"
#include "MagicalEntity.h"
//#include "Hero.h"
class Spellblade : public Warrior, public MagicalEntity {
public:
    Spellblade(string n = "Unknown ", int hp = 130, 
      int pwr = 18, int armor = 5, int spell = 12);
    ~Spellblade();
    
 int calculateHybridDamage() const;
    

    string getName() const;
    int getHealth() const;
    int getPower() const;
    void takeDamage(int damage);
 int getArmorRating() const { return Warrior::getArmorRating(); }
    int getSpellPower() const { return MagicalEntity::getSpellPower(); }
    int getManaPool() const { return MagicalEntity::getManaPool(); }
};
   
#endif