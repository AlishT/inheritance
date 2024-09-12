#pragma once
#include <iostream>

struct Vector
{
	float x;
	float y;
	float z;

	Vector() = default;
	Vector(float inX, float inY);
	Vector(float inX, float inY, float inZ);

	static float Distance2D(const Vector& A, const Vector& B);
	static float Distance(const Vector& A, const Vector& B);

	friend Vector operator + (Vector vector, const Vector& other);
	friend Vector operator - (Vector vector, const Vector& other);
	friend Vector operator * (Vector vector, const Vector& other);
	friend Vector operator / (Vector vector, const Vector& other);

	Vector& operator += (const Vector& other);
	Vector& operator -= (const Vector& other);
	Vector& operator *= (const Vector& other);
	Vector& operator /= (const Vector& other);

	friend Vector operator + (Vector vector, float value);
	friend Vector operator - (Vector vector, float value);
	friend Vector operator * (Vector vector, float value);
	friend Vector operator / (Vector vector, float value);

	friend Vector operator += (Vector& vector, float value);
	friend Vector operator -= (Vector& vector, float value);
	friend Vector operator *= (Vector& vector, float value);
	friend Vector operator /= (Vector& vector, float value);

	friend std::ostream& operator << (std::ostream& os, const Vector& vector);
	
};

