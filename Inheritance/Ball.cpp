#include "Ball.h"

Ball::Ball(const Vector& _center, float _radius)
	: center(_center)
	, radius(_radius)
{
}

float Ball::GetPerimeter() const
{
	return 2 * 3.14 * radius;
}

float Ball::GetArea() const
{
	return 4 * 3.14 * pow(radius, 2);
}

float Ball::GetVolume() const
{
	return (4 / 3) * 3.14 * pow(radius, 3);
}

float Ball::GetSurfaceArea() const
{
	return 4 * 3.14 * pow(radius, 2);
}

Vector Ball::GetCenter() const
{
	return center;
}

VectorArray Ball::GetVertices() const
{
	return { center };
}
