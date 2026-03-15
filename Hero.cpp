#include "Hero.h"

Hero :: Hero(string n , int hp, int pwr){
    name = n;
    health = hp;
    power = pwr;
}
Hero :: ~Hero(){

}
string Hero :: getName()const {
    return name;
}
int Hero :: getHealth() const{
    return health;
}
int Hero :: getPower() const {
    return power;
}
void Hero :: setName(string newName){
    name = newName;
}
void Hero :: setHealth (int newHealth){
    health = newHealth;
}
void Hero :: setPower(int newPower){
    power = newPower;
}
void Hero :: takeDamage(int damage){
    health-= damage;
    if (health < 0){
        health = 0;
    }
}
bool Hero :: operator>(const Hero &others)const {
    if( power > others.power){
        return true;
    } else {
        return false;
    }
}
int Hero :: operator +(const Hero &others)const{
    return health + others.health;
}


