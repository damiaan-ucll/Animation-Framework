//
//  Vector.cpp
//  PvM_AnimationFramework
//
//  Created by Damiaan Dufaux on 27/04/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#include "Vector.h"

#pragma mark - Constructor
Vector::Vector(const Point& start, const Point& end) {
	x = end.x - start.x;
	y = end.y - start.y;
}

#pragma mark - Member functions
double Vector::dot(Vector& right) const {
	return right.x*x + right.y*y;
}

double Vector::length() const {
	return sqrt(x*x + y*y);
}

void Vector::normalize() {
	double length = this->length();
	x /= length;
	y /= length;
}

double Vector::angle() const {
	return y>0 ? acos(x/length()) : -acos(x/length());
}

#pragma mark - Operator overloders
Point Vector::operator + (const Point &point) const {
	return Point(x + point.x, y + point.y);
}

Point operator + (const Point& point, const Vector& vector) {
	return vector + point;
}

Vector Vector::operator * (const double factor) {
	return Vector(factor * x, factor * y);
}

Vector operator * (const double factor, Vector& vector)  {
	return vector * factor;
}

Vector Vector::operator + (const Vector& right) const {
	return Vector(x + right.x, y + right.y);
}

Vector Vector::operator - (const Vector& right) const {
	return Vector(x - right.x, y - right.y);
}