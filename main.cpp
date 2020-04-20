#include <iostream>
#include "Monster.h"
#include "WaterMonster.h"
#include "AirMonster.h"
#include "KillerWhale.h"
#include "GreatWhite.h"
using namespace std;

int main()

{
    Monster * Power[2];
    Power[0] = new KillerWhale(600,20);
    Power[1] = new GreatWhite(150,30);

    for(int i=0; i < 2; i++)
        {
        Power[i]->KillingNow();
        }
    cout << "----------------------------------" << endl;
     WaterMonster * Speed[2];
    Speed[0] = new KillerWhale(600,20);
    Speed[1] = new GreatWhite(150,30);

    for(int i=0; i < 2; i++)
        {
        Speed[i]->SwimmingNow();
        }
    return 0;
}
