#include "Ellipse.h"


Ellipse::Ellipse(const Vector& _center, float _a, float _b)
	: center(_center)
	, radiusA(_a)
	, radiusB(_b)
{
	
}

float Ellipse::GetPerimeter() const
{
	return 4 * (3.14 * radiusA * radiusB + (pow(radiusA - radiusB, 2))) / (radiusA + radiusB);
}

float Ellipse::GetArea() const
{
	return 3.14 * radiusA * radiusB;
}


VectorArray Ellipse::GetVertices() const
{
	return { center };
}

Vector Ellipse::GetCenter() const
{
	return center;
}
