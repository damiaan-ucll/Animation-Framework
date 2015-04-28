//
//  Vector.cpp
//  PvM_AnimationFramework
//
//  Created by Damiaan Dufaux on 27/04/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#include "Vector.h"

Vector::Vector(Point& start, Point& end) {
	x = end.x - start.x;
	y = end.y - start.y;
}

Point Vector::operator + (const Point &point) const {
	return Point(x + point.x, y + point.y);
}

Point operator + (const Point& point, const Vector& vector) {
	return vector + point;
}

Vector Vector::operator * (const double factor) {
	return Vector(factor * x, factor * y);
}

Vector operator * (const Vector& vector, const double factor)  {
	return vector * factor;
}

Vector Vector::operator + (const Vector& right) const {
	return Vector(x + right.x, y + right.y);
}

Vector Vector::operator - (const Vector& right) const {
	return Vector(x - right.x, y - right.y);
}