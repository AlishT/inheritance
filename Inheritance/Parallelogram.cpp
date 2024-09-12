#include "Parallelogram.h"


Parallelogram::Parallelogram(const Vector& A, const  Vector& B, const Vector& C)
	: pointA(A)
	, pointB(B)
	, pointC(C)
{
	pointD = C - B + A;
	hight = abs(B.y - A.y);
}


float Parallelogram::GetPerimeter() const
{
	return 2 * (Vector::Distance2D(pointA, pointB) + Vector::Distance2D(pointB, pointC));
}

float Parallelogram::GetArea() const
{
	
	return hight * Vector::Distance2D(pointA, pointD);
}

Vector Parallelogram::GetCenter() const
{
	return (pointA + pointC) / 2;
}

VectorArray Parallelogram::GetVertices() const
{
	return {pointA, pointB, pointC, pointD};
}


