#include "WaterMonster.h"
#include "Monster.h"
using namespace std;

WaterMonster::WaterMonster(int k,int s)
:Monster(k)
{
    swimSpeed = s;
}

WaterMonster::~WaterMonster()
{
    //dtor
}

