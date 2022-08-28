#ifndef VECTOR3_H
#define VECTOR3_H


class Vector3
{
    public:
        float x,y,z;
        Vector3(float x,float y,float z);
        Vector3();
        Vector3 Normalized() const;
        virtual ~Vector3();
        Vector3 operator+(const Vector3 & f) const;
        Vector3 operator-(const Vector3 & f) const;
        Vector3 operator*(float s) const;
        Vector3 operator/(float s) const;
        float Length() const;
        void PrintVectorValues();
        float LengthSquare() const;

    protected:

    private:

};

#endif // VECTOR3_H
