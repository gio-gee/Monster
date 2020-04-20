#ifndef KILLERWHALE_H
#define KILLERWHALE_H
#include "WaterMonster.h"
#include <iostream>
using namespace std;


class KillerWhale final : public WaterMonster
{
    public:
        KillerWhale(int,int);
        ~KillerWhale();
        void KillingNow();
        void SwimmingNow();


    protected:

    private:
};

#endif // KILLERWHALE_H
