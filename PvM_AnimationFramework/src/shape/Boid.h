//
//  Boid.h
//  PvM_AnimationFramework
//
//  Created by Damiaan Dufaux on 8/06/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#ifndef __PvM_AnimationFramework__Boid__
#define __PvM_AnimationFramework__Boid__

#include "Point.h"
#include "Vector.h"
#include <stdio.h>
#include "IAnimatable.h"
#include "Shape.h"

class Boid: public Shape, public IAnimatable {
	Point centre;
	double size;
	Vector velocity;
	
public:
	
	#pragma mark Constructor
	Boid(const Point& centre, const double size, const Vector& velocity, const Colour& colour);
	
	#pragma mark - Getters
	Point getCentre() const;
	double getSize() const;
	Vector getVelocity() const;
	
	#pragma mark Setters
	void setCentre(const Point& newValue);
	void setSize(const double newValue);
	void setVelocity(const Vector& newValue);
	
	#pragma mark - Drawable
	void draw() const;
	
	#pragma mark Animatable
	void update(Scene& scene);
};

#endif /* defined(__PvM_AnimationFramework__Boid__) */
