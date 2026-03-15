#ifndef KNIGHT_H
#define KNIGHT_H

#include "Warrior.h"

class Knight : public Warrior {
private:
    int chargeBonus;

public:
    Knight(string n = "Unknown", int hp = 150, 
           int pwr = 20, int armor = 8, int charge = 10);
    ~Knight();
    
    int getChargeBonus() const;
    void setChargeBonus(int charge);
    
    int calculateBurstDamage() const;
};

#endif