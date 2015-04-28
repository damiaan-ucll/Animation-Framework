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
#include <cmath>
#include "Point.h"

class Vector {
public:
	
	#pragma mark - Member variables
	double x, y;
	
	#pragma mark - Constructors
	Vector(double x, double y): x(x), y(y) {}
	Vector(Point& start, Point& end);
	
	#pragma mark - Member functions
	double dot(Vector&) const;
	double length() const;
	void normalize();
	
	#pragma mark - Operator overloders
	Point operator + (const Point& point) const;
	friend Point operator + (const Point& point, const Vector& vector);
	
	Vector operator * (const double factor);
	friend Vector operator * (const Vector& vector, const double factor);
	
	Vector operator + (const Vector& right) const;
	
	Vector operator - (const Vector& right) const;
};

#endif /* defined(__PvM_AnimationFramework__Vector__) */
