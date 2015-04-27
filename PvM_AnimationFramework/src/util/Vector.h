//
//  Vector.h
//  PvM_AnimationFramework
//
//  Created by Damiaan Dufaux on 27/04/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#ifndef __PvM_AnimationFramework__Vector__
#define __PvM_AnimationFramework__Vector__

#include <stdio.h>
#include "Point.h"

class Vector {
public:
	
	double x, y;
	
	Vector(double x, double y): x(x), y(y) {}
	
	Point operator + (Point& point);
	friend Point operator + (Point& point, Vector& vector);
};

#endif /* defined(__PvM_AnimationFramework__Vector__) */
