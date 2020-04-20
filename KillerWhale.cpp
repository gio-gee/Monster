#include "KillerWhale.h"
#include "WaterMonster.h"
#include "Monster.h"
using namespace std;

KillerWhale::KillerWhale(int k, int s)
:WaterMonster(k,s)
{

}

KillerWhale::~KillerWhale()
{
    //dtor
}

void KillerWhale::KillingNow()
{
    cout << "KillerWhale kills by crushing with her teeth = " << killingPower << " KillingPower" << endl;
}

void KillerWhale::SwimmingNow()
{
    cout << "KillerWhale swims at a speed of  " << swimSpeed << "mph" << endl;
}
