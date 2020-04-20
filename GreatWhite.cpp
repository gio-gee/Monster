#include "GreatWhite.h"
#include "WaterMonster.h"
#include "Monster.h"
using namespace std;

GreatWhite::GreatWhite(int k, int s)
:WaterMonster(k,s)
{
    //ctor
}

GreatWhite::~GreatWhite()
{
    //dtor
}

void GreatWhite::KillingNow()
{
    cout << "GreatWhite kills by biting 3 times with the killingPower = " << killingPower << endl;
}

void GreatWhite::SwimmingNow()
{
    cout << " GreatWhite swims at a speed of  " << swimSpeed << "mph" << endl;
}
