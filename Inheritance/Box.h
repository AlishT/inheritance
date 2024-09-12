#pragma once

#include <iostream>
#include "Body3D.h"
#include "Vector.h"

class Box : Body3D
{
	Vector pointA;
	Vector pointB;
	Vector pointC;
	Vector pointD;
	Vector pointE;
	Vector pointF;
	Vector pointG;
	Vector pointH;
public:
	Box(const Vector& A, const Vector& G);

	float GetPerimeter() const override;
	float GetArea() const override;

	float GetVolume() const override;
	float GetSurfaceArea() const override;

	Vector GetCenter() const override;
	VectorArray GetVertices() const override;
	
};

