#ifndef AIRMONSTER_H
#define AIRMONSTER_H
#include "Monster.h"
#include <iostream>
using namespace std;


class AirMonster final : public Monster
{
    public:
        AirMonster(int,int);
        ~AirMonster();
        int FlyingSpeed();
        virtual void FlyingNow()=0;

    protected:

    private:
};

#endif // AIRMONSTER_H
