#pragma once

#include "stdafx.h"
#include <iostream>

class Vector3 {
private:
	double _x;
	double _y;
	double _z;
public:
	Vector3(double x, double y, double z);
	double getX() const;
	double getY() const;
	double getZ() const;
	Vector3& operator+=(const Vector3& rhs);
	Vector3& operator-=(const Vector3& rhs);
	Vector3& operator*=(double rhs);
	Vector3& operator%=(const Vector3& rhs);
};
std::ostream& operator<<(std::ostream& out, const Vector3& v);
Vector3 operator+(Vector3 lhs, const Vector3& rhs);
Vector3 operator-(Vector3 lhs, const Vector3& rhs);
double operator*(const Vector3& lhs, const Vector3& rhs);
Vector3 operator*(double lhs, Vector3 rhs);
Vector3 operator*(Vector3 lhs, double rhs);
Vector3 operator%(Vector3 lhs, const Vector3& rhs);