#pragma once

#include <iostream>
#include "Body3D.h"
#include "Vector.h"

class Ball : public Body3D
{
protected:
	Vector center;
	float radius;
public:

	Ball(const Vector& _center, float _radius);

	float GetPerimeter() const override;
	float GetArea() const override;

	float GetVolume() const override;
	float GetSurfaceArea() const override;

	Vector GetCenter() const override;
	VectorArray GetVertices() const override;

};

