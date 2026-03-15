#include "MagicalEntity.h"

MagicalEntity::MagicalEntity(string n, int hp, int pwr, int mana, int spell) 
    : Hero(n, hp, pwr) {
    manaPool = mana;
    spellPower = spell;
}

MagicalEntity::~MagicalEntity() {
    
}

int MagicalEntity::getManaPool() const {
    return manaPool;
}

int MagicalEntity::getSpellPower() const {
    return spellPower;
}

void MagicalEntity::setManaPool(int mana) {
    manaPool = mana;
}

void MagicalEntity::setSpellPower(int spell) {
    spellPower = spell;
}