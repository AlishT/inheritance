#pragma once

#include <iostream>
#include "Body2D.h"

class Body3D : public Body2D
{
public:

	virtual float GetVolume() const = 0;
	virtual float GetSurfaceArea() const = 0;
};

