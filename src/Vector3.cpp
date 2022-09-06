#include "Vector3.h"
#include <iostream>
#include <cmath>
Vector3::Vector3(float xVar,float yVar,float zVar)
{
     this->x = xVar;
     this->y = yVar;
     this->z = zVar;
}
Vector3::Vector3(){
    this->x = 0;
    this->y = 0;
    this->z = 0;
}

Vector3::~Vector3()
{
    //dtor
}
float Vector3::Length() const{
    float _length = 0;
    _length = sqrt(x*x+y*y+z*z);
    return _length;
}
float Vector3::LengthSquare() const{
    float _length = 0;
    _length = x*x+y*y+z*z;//used when comparing the distance
    return _length;
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
Vector3 Vector3::operator* (float s) const
{
     Vector3 scaled(0,0,0);
     scaled.x = x*s;
     scaled.y = y*s;
     scaled.z = z*s;
     return scaled;
}
Vector3 Vector3::operator/ (float s) const
{
     Vector3 scaled(0,0,0);
     scaled.x = x/s;
     scaled.y = y/s;
     scaled.z = z/s;
     return scaled;
}

Vector3 Vector3::Normalized() const{
    Vector3 normalizedVector;
    normalizedVector = (*this)/Length();
    return normalizedVector;
}
float Vector3::Dot(const Vector3 & a, const Vector3 & b){
    float dotProduct = a.x*b.x+a.y*b.y+a.z*b.z;
    return dotProduct; //use it only on normalized vectors
    //if dot product will be less than -0.5 then you can assume the backstabbing
}

void Vector3::PrintVectorValues(){
   std::cout<<x<<" "<<y<<" "<<z<<std::endl;
}
