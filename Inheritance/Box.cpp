#include "Box.h"

Box::Box(const Vector& A, const Vector& G)
    : pointA(A)
    , pointG(G)
{
    float edgeLenght = abs(G.x - A.x);
    pointB = A;
    pointC = G;
    pointD = A;
    pointE = A;
    pointF = G;
    pointH = G;
    pointB.y = A.y + edgeLenght;
    pointC.z = G.z - edgeLenght;
    pointD.x = A.x - edgeLenght;
    pointE.z = A.z + edgeLenght;
    pointF.x = G.x + edgeLenght;
    pointH.y = G.y - edgeLenght;
}

float Box::GetPerimeter() const
{
    return 12 * Vector::Distance(pointA, pointB);
}

float Box::GetArea() const
{
    return 6 * pow(Vector::Distance(pointA, pointB), 2);;
}

float Box::GetVolume() const
{
    return pow(Vector::Distance(pointA, pointB), 3);
}

float Box::GetSurfaceArea() const
{
    return 6 * pow(Vector::Distance(pointA, pointB), 2);
}

Vector Box::GetCenter() const
{
    return (pointA + pointG) / 2;;
}

VectorArray Box::GetVertices() const
{
    return { pointA, pointB, pointC, pointD, pointE, pointF, pointG, pointH };
}
