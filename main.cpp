#include <iostream>
#include "Vector3.h"
using namespace std;

int main()
{
    Vector3 testingTheScale(3,4,5);
    Vector3 normalized = testingTheScale.Normalized();
    std::cout<<"Normalized testing vector "<<normalized.Length();
}
