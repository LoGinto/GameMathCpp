#include <iostream>
#include "Vector3.h"
using namespace std;

int main()
{
    Vector3 vectorZero(0,0,0);
    Vector3 vectorOne(1,1,1);
    Vector3 sumOfZeroAndOne = vectorZero+vectorOne;
    sumOfZeroAndOne.PrintVectorValues();
}
