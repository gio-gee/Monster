#include "AirMonster.h"
#include "Monster.h"
using namespace std;

AirMonster::AirMonster(int k,int f)
:Monster(k)
{
  //FlyingSpeed = f;
  //gives me an error saying ( did you forget the '&' ?)
}

AirMonster::~AirMonster()
{
    //dtor
}

void AirMonster::FlyingNow()
{
    cout << "     " <<endl;
}
