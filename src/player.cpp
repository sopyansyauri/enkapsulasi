#include "player.hpp"

player::player(string isiNama) {
    this->nama = isiNama;
}

void player::display() {
    cout << "NAMA: " << this->nama << endl;
    this->Weapon->display();
}

void player::equipweapon(weapon* isiWeapon) {
    this->Weapon = isiWeapon;
}

void player::getName(weapon* isiWeapon) {
    this->Weapon = isiWeapon;
    player::Weapon->getname();
}