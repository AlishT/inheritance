#pragma once

#include <iostream>
#include "Body2D.h"
#include "Vector.h"

class Parallelogram : public Body2D
{
private:
	Vector pointA;
	Vector pointB;
	Vector pointC;
	Vector pointD;
	float hight;
public:

	Parallelogram(const Vector& A, const Vector& B, const Vector& C);

	float GetPerimeter() const override;
	float GetArea() const override;

	Vector GetCenter() const override;
	VectorArray GetVertices() const override;
};