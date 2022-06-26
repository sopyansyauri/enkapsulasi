#include <iostream>
#include "player.hpp"
#include "weapon.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    player* player1 = new player("RIFAI SOPYAN SYAURI");
    weapon* alat_tembak = new weapon("R80 Basoka", 40);
    player1->equipweapon(alat_tembak);
    player1->display();
    player1->getName(alat_tembak);
    // weapon* senjata1 = new weapon("M4", 30);
    // senjata1->display();
    return 0;
}
