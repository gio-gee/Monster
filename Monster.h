#ifndef MONSTER_H
#define MONSTER_H
#include <iostream>
using namespace std;

class Monster
{
    public:
        Monster(int);
        ~Monster();
        int killingPower;
        virtual void KillingNow()= 0;


    protected:

    private:
};

#endif // MONSTER_H
