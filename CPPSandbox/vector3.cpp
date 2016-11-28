#pragma once

#include "stdafx.h"
#include <iostream>

#include "Vector3.h"

Vector3::Vector3(double x, double y, double z) : _x(x), _y(y), _z(z) {}

double Vector3::getX() const {
	return _x;
}

double Vector3::getY() const {
	return _y;
}

double Vector3::getZ() const {
	return _z;
}

Vector3& Vector3::operator+=(const Vector3& rhs) {
	_x += rhs.getX();
	_y += rhs.getY();
	_z += rhs.getZ();
	return *this;
}

Vector3& Vector3::operator-=(const Vector3& rhs) {
	_x -= rhs.getX();
	_y -= rhs.getY();
	_z -= rhs.getZ();
	return *this;
}

Vector3& Vector3::operator*=(double rhs) {
	_x *= rhs;
	_y *= rhs;
	_z *= rhs;
	return *this;
}

Vector3& Vector3::operator%=(const Vector3& rhs) {
	double x, y, z;
	x = getY() * rhs.getZ() - getZ() * rhs.getY();
	y = getZ() * rhs.getX() - getX() * rhs.getZ();
	z = getX() * rhs.getY() - getY() * rhs.getX();
	_x = x;
	_y = y;
	_z = z;
	return *this;
}

std::ostream& operator<<(std::ostream& out, const Vector3& v) {
	return out << "(" << v.getX() << ", " << v.getY() << ", " << v.getZ() << ")";
}

Vector3 operator+(Vector3 lhs, const Vector3& rhs) {
	return lhs += rhs;
}

Vector3 operator-(Vector3 lhs, const Vector3& rhs) {
	return lhs -= rhs;
}

double operator*(const Vector3& lhs, const Vector3& rhs) {
	return lhs.getX() * rhs.getX() + lhs.getY() * rhs.getY() + lhs.getZ() * rhs.getZ();
}

Vector3 operator*(double lhs, Vector3 rhs) {
	return rhs *= lhs;
}

Vector3 operator*(Vector3 lhs, double rhs) {
	return lhs *= rhs;
}

Vector3 operator%(Vector3 lhs, const Vector3& rhs) {
	return lhs %= rhs;
}