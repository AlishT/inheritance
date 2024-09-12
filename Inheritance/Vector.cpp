#include "Vector.h"

Vector::Vector(float inX, float inY)
    : x(inX)
    , y(inY)
{
}

Vector::Vector(float inX, float inY, float inZ)
    : x(inX)
    , y(inY)
    , z(inZ)
{
}

float Vector::Distance2D(const Vector& A, const Vector& B)
{
    return sqrt(pow((B.x - A.x), 2) + pow((B.y - A.y), 2));
}

float Vector::Distance(const Vector& A, const Vector& B)
{
    return sqrt(pow((B.x - A.x), 2) + pow((B.y - A.y), 2) + +pow((B.z - A.z), 2));
}

Vector& Vector::operator+=(const Vector& other)
{
    x += other.x;
    y += other.y;
    z += other.z;
    return *this;
}

Vector& Vector::operator-=(const Vector& other)
{
    x -= other.x;
    y -= other.y;
    z -= other.z;
    return *this;
}

Vector& Vector::operator*=(const Vector& other)
{
    x *= other.x;
    y *= other.y;
    z *= other.z;
    return *this;
}

Vector& Vector::operator/=(const Vector& other)
{
    x /= other.x;
    y /= other.y;
    z /= other.z;
    return *this;
}

Vector operator + (Vector vector, const Vector& other)
{
    return Vector(vector.x + other.x, vector.y + other.y, vector.z + other.z);
}

Vector operator - (Vector vector, const Vector& other)
{
    return Vector(vector.x - other.x, vector.y - other.y, vector.z - other.z);
}

Vector operator * (Vector vector, const Vector& other)
{
    return Vector(vector.x * other.x, vector.y * other.y, vector.z * other.z);
}

Vector operator / ( Vector vector, const Vector& other)
{
    return Vector(vector.x / other.x, vector.y / other.y, vector.z / other.z);
}

Vector operator + (Vector vector, float value)
{
    return Vector(vector.x + value, vector.y + value, vector.z + value);
}

Vector operator - (Vector vector, float value)
{
    return Vector(vector.x - value, vector.y - value, vector.z - value);
}

Vector operator * (Vector vector, float value)
{
    return Vector(vector.x * value, vector.y * value, vector.z * value);
}

Vector operator / (Vector vector, float value)
{
    return Vector(vector.x / value, vector.y / value, vector.z / value);
}

Vector operator+=(Vector& vector, float value)
{
    vector.x += value;
    vector.y += value;
    vector.z += value;
    return vector;
}

Vector operator-=(Vector& vector, float value)
{
    vector.x -= value;
    vector.y -= value;
    vector.z -= value;
    return vector;
}

Vector operator*=(Vector& vector, float value)
{
    vector.x *= value;
    vector.y *= value;
    vector.z *= value;
    return vector;
}

Vector operator/=(Vector& vector, float value)
{
    vector.x /= value;
    vector.y /= value;
    vector.z /= value;
    return vector;
}

std::ostream& operator<<(std::ostream& os, const Vector& vector)
{
    os << vector.x << '/' << vector.y << '/' << vector.z;
    return os  ;
}
