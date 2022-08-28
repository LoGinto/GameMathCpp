#ifndef VECTOR3_H
#define VECTOR3_H


class Vector3
{
    public:
        float x,y,z;
        Vector3(float x,float y,float z);
        virtual ~Vector3();
        Vector3 operator+(const Vector3 & f) const;
        Vector3 operator-(const Vector3 & f) const;
        PrintVectorValues();

    protected:

    private:

};

#endif // VECTOR3_H
