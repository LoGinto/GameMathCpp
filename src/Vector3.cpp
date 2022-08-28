#include "Vector3.h"
#include <iostream>
Vector3::Vector3(float xVar,float yVar,float zVar)
{
     this->x = xVar;
     this->y = yVar;
     this->z = zVar;
}

Vector3::~Vector3()
{
    //dtor
}
Vector3 Vector3::operator+ (const Vector3& anotherVector) const
{
      Vector3 result(0,0,0);
      result.x = x+anotherVector.x;
      result.y = y + anotherVector.y;
      result.z = z+anotherVector.z;
      return result;
}
Vector3 Vector3::operator- (const Vector3& anotherVector) const
{
      Vector3 result(0,0,0);
      result.x = x-anotherVector.x;
      result.y = y - anotherVector.y;
      result.z = z-anotherVector.z;
      return result;
}
Vector3::PrintVectorValues(){
   std::cout<<x<<" "<<y<<" "<<z;
}
