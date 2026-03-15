#include "Warrior.h"

Warrior::Warrior(string n, int hp, int pwr, int armor) 
    : Hero(n, hp, pwr) {
    armorRating = armor;
}

Warrior::~Warrior() {
    
}

int Warrior::getArmorRating() const {
    return armorRating;
}

void Warrior::setArmorRating(int armor) {
    armorRating = armor;
}

int Warrior::calculateEffectiveHealth() const {
    int health = getHealth();
   return health + (armorRating *2);
   
}