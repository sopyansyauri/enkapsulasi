#include <iostream>
#include "weapon.hpp"

weapon::weapon(string isiSenjata, int isiPower) {
    this->senjata = isiSenjata;
    this->power = isiPower;
}

void weapon::display() {
    cout << "SENJATA: " << this->senjata << endl;
    cout << "POWER: " << this->power << endl;
}

void weapon::getname() {
    cout << "SENJATA: " << this->senjata << endl;
}