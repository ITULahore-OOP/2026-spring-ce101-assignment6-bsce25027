#include "Guild.h"
#include <iostream>
using namespace std;


Guild::Guild(string name) {
    guildName = name;
    memberCount = 0;
    
    
    for(int i = 0; i < 15; i++) {
        roster[i] = NULL;
    }
}


Guild::~Guild() {

    for(int i = 0; i < memberCount; i++) {
        
    }
    cout << "The guild " << guildName << " has been disbanded!" << endl;
}


string Guild::getGuildName() const {
    return guildName;
}


int Guild::getMemberCount() const {
    return memberCount;
}


int Guild::calculateTotalGuildPower() const {
    int total = 0;
    for(int i = 0; i < memberCount; i++) {
        total = total + roster[i]->getPower();
    }
    return total;
}


void Guild::displayGuildStats() const {
    cout << "Guild Name: " << guildName  << "\n";
    cout << "Total Members: " << memberCount << "/15\n";
    cout << "Total Guild Power: " << calculateTotalGuildPower() << "\n";
    
}


void Guild::operator+=(Hero* newHero) {
    if(memberCount < 15) {
        roster[memberCount] = newHero;
        memberCount++;
        cout << newHero->getName() << " joined guild\n";
    }
    else {
        cout << "Guild is at full capacity!" << endl;
    }
}


ostream& operator<<(ostream& os, const Guild& g) {
    os << "Guild: " << g.guildName  << "\n";
    os << "Members: " << g.memberCount << "/15\n";
    
    for(int i = 0; i < g.memberCount; i++) {
        os << "- " << g.roster[i]->getName() << " (Power: " << g.roster[i]->getPower() << ")\n";
    }
    
    return os;
}