//
//  Vector.cpp
//  PvM_AnimationFramework
//
//  Created by Damiaan Dufaux on 27/04/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#include "Vector.h"

Point Vector::operator + (const Point &point) const {
	return Point(x + point.x, y + point.y);
}

Point operator + (const Point& point, const Vector& vector) {
	return vector + point;
}