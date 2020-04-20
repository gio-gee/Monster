#ifndef GREATWHITE_H
#define GREATWHITE_H
#include "WaterMonster.h"
#include <iostream>
using namespace std;


class GreatWhite final : public WaterMonster
{
    public:
        GreatWhite(int,int);
        ~GreatWhite();
        void KillingNow();
        void SwimmingNow();

    protected:

    private:
};

#endif // GREATWHITE_H
