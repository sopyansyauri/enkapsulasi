#ifndef __WEAPON
#define __WEAPON

#include <string>

using namespace std;

class weapon{
    private:
        string senjata;
        int power;

    public:
        weapon(string, int);
        void display();
        void getname();
};

#endif