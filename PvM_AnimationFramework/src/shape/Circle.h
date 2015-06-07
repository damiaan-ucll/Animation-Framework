//
//  Circle.h
//  PvM_AnimationFramework
//
//  Created by Damiaan Dufaux on 27/04/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#ifndef __PvM_AnimationFramework__Circle__
#define __PvM_AnimationFramework__Circle__

#include <stdio.h>
#include <cmath>
#include "Shape.h"
#include "../util/Point.h"

class Circle: public Shape {
	
	Point centre;
	double radius;
		
public:
	
	Circle(Point centre, double radius, Colour colour): centre(centre), radius(radius), Shape(colour) {}
	
	Point getCentre() const;
	void  setCentre(Point newCentre);
	double getRadius() const;
	void   setRadius(double newRadius);
	
	void draw() const;
	
};

#endif /* defined(__PvM_AnimationFramework__Circle__) */