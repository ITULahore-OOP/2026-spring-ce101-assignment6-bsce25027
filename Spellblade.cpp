#include "Spellblade.h"

Spellblade::Spellblade(string n, int hp, int pwr, int armor, int spell) 
    : Warrior(n, hp, pwr, armor), 
      MagicalEntity(n, hp, pwr, 60, spell) {

}

Spellblade::~Spellblade() {
    
}

int Spellblade::calculateHybridDamage() const {
   return Warrior::getPower() + MagicalEntity::getSpellPower();
}


string Spellblade::getName() const {
    return Warrior::getName();
}

int Spellblade::getHealth() const {
    return Warrior::getHealth();
}

int Spellblade::getPower() const {
    return Warrior::getPower();
}

void Spellblade::takeDamage(int damage) {
    Warrior::takeDamage(damage);
}