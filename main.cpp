#include <iostream>
#include "Hero.h"
#include "Warrior.h"
#include "Knight.h"
#include "MagicalEntity.h"
#include "Spellblade.h"
#include "Guild.h"

using namespace std;

int main() {
    cout << "=================================" << endl;
    cout << "     GUILD SYSTEM TESTING" << endl;
    cout << "=================================" << endl;
    
    
    cout << "\n--- PART 1: Hero Class ---" << endl;
    
    
    Hero hero1("Hero1", 100, 15);
    Hero hero2("Hero2", 120, 10);
    
    cout << hero1.getName() << " HP:" << hero1.getHealth() 
         << " PWR:" << hero1.getPower() << endl;
    cout << hero2.getName() << " HP:" << hero2.getHealth() 
         << " PWR:" << hero2.getPower() << endl;
    
    
    cout << "\n" << hero1.getName() << " takes 30 damage" << endl;
    hero1.takeDamage(30);
    cout << "New HP: " << hero1.getHealth() << endl;
    
    
    cout << "\nComparing power:" << endl;
    if(hero1 > hero2) {
        cout << hero1.getName() << " is stronger" << endl;
    }
    else {
        cout << hero2.getName() << " is stronger" << endl;
    }
    
    
    cout << "\nCombined health: " << (hero1 + hero2) << endl;
    
    
    cout << "\n--- PART 2: Inheritance ---" << endl;
    
    
    Warrior w("Warrior1", 120, 15, 5);
    cout << "\nWarrior:" << endl;
    cout << "Name: " << w.getName() << endl;
    cout << "Armor: " << w.getArmorRating() << endl;
    cout << "Effective Health: " << w.calculateEffectiveHealth() << endl;
    
    
    Knight k("Knight1", 150, 20, 8, 10);
    cout << "\nKnight:" << endl;
    cout << "Name: " << k.getName() << endl;
    cout << "Charge Bonus: " << k.getChargeBonus() << endl;
    cout << "Burst Damage: " << k.calculateBurstDamage() << endl;
    
    
    MagicalEntity m("Mage1", 80, 12, 50, 15);
    cout << "\nMagic Entity:" << endl;
    cout << "Name: " << m.getName() << endl;
    cout << "Mana: " << m.getManaPool() << endl;
    cout << "Spell Power: " << m.getSpellPower() << endl;
    
    
    Spellblade s("Spellblade1", 130, 18, 5, 12);
    cout << "\nSpellblade:" << endl;
    cout << "Name: " << s.getName() << endl;
    cout << "Armor: " << s.getArmorRating() << endl;
    cout << "Spell Power: " << s.getSpellPower() << endl;
    cout << "Hybrid Damage: " << s.calculateHybridDamage() << endl;
    
    
    cout << "\n--- PART 3: Guild ---" << endl;

    Guild g("TestGuild");
    
    
    Hero* h1 = new Hero("H1", 100, 10);
    Warrior* w1 = new Warrior("W1", 120, 15, 5);
    Knight* k1 = new Knight("K1", 150, 20, 8, 10);
    MagicalEntity* m1 = new MagicalEntity("M1", 80, 12, 50, 15);
    Spellblade* s1 = new Spellblade("S1", 130, 18, 5, 12);
    
    
    cout << "\nAdding heroes:" << endl;
    g += h1;
    g += w1;
   g += k1;
    g += m1;
    g +=(Hero*)(Warrior*) s1;  
    

    cout << "\nGuild Stats:" << endl;
    g.displayGuildStats();
    
    
    cout << "\nUsing cout operator:" << endl;
    cout << g;
    
    
    cout << "\nTesting capacity:" << endl;
    for(int i = 0; i < 12; i++) {
        Hero* temp = new Hero("Extra", 100, 10);
        g += temp;
    }
    
  
    cout << "\n=================================" << endl;
    cout << "     PROGRAM ENDED" << endl;
    cout << "=================================" << endl;
    
    return 0;
}