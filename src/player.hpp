#ifndef __PLAYER
#define __PLAYER

#include <iostream>
#include <string>
#include "weapon.hpp"

using namespace std;

class player{
    private:
        string nama;
        weapon* Weapon;

    public:
        player(string);
        void display();
        void equipweapon(weapon*);
        void getName(weapon*);
    
};

#endif