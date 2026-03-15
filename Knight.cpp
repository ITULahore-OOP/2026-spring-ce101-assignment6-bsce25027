#include "Knight.h"

Knight::Knight(string n, int hp, int pwr, int armor, int charge) 
    : Warrior(n, hp, pwr, armor) {
    chargeBonus = charge;
}

Knight::~Knight() {
    
}

int Knight::getChargeBonus() const {
    return chargeBonus;
}

void Knight::setChargeBonus(int charge) {
    chargeBonus = charge;
}

int Knight::calculateBurstDamage() const {
    
    return getPower() + chargeBonus;
}