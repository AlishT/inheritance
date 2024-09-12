#pragma once

#include <iostream>
#include "Body2D.h"
#include "Vector.h"

class Ellipse : Body2D
{
private:
	Vector center;
	float radiusA;
	float radiusB;

public:
	
	Ellipse(const Vector& _center, float _a, float _b);

	float GetPerimeter() const override;
	float GetArea() const override;

	Vector GetCenter() const override;
	VectorArray GetVertices() const override;
};

