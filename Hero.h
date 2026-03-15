#ifndef HERO_H
#define HERO_H
#include <iostream>
#include <string>

using namespace std;

class Hero {
    private :
    string name;
    int health;
    int power;
    public:
    Hero(string name = "Unknown", int hp= 100, int power = 10);
    ~Hero ();
    string getName() const;
    int getHealth() const;
    int getPower()const;
    void setName(string newName);
    void setHealth(int newHealth);
    void setPower(int newPower);
    void takeDamage(int damage);
    bool operator>(const Hero &others)const;
    int operator +(const Hero &others) const;
    

};

#endif