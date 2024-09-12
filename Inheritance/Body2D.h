#pragma once
#include <iostream>
#include <vector>

using VectorArray = std::vector<struct Vector>;

class Body2D
{

public:
	
	
	virtual float GetPerimeter() const = 0;
	virtual float GetArea() const = 0;

	virtual Vector GetCenter() const = 0;
	virtual VectorArray GetVertices() const = 0;

};

