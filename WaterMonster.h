#ifndef WATERMONSTER_H
#define WATERMONSTER_H
#include "Monster.h"
#include <iostream>
using namespace std;


class WaterMonster : public Monster
{
    public:
        WaterMonster(int,int);
        ~WaterMonster();
        int swimSpeed;
        virtual void SwimmingNow()=0;

    protected:

    private:
};

#endif // WATERMONSTER_H
