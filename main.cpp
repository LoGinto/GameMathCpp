#include <iostream>
#include "Vector3.h"
using namespace std;

int main()
{
    Vector3 one(4,5,6);
    Vector3 twot(6,5,4);
    Vector3 oneNormalized = one.Normalized();
    Vector3 twoNormalized = twot.Normalized();
    std::cout<<"dot product equals "<<Vector3::Dot(oneNormalized,twoNormalized);
}
