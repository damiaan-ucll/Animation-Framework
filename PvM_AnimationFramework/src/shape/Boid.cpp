//
//  Boid.cpp
//  PvM_AnimationFramework
//
//  Created by Damiaan Dufaux on 8/06/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#include "Boid.h"

#pragma mark Constructor

Boid::Boid(const Point& centre, const double size, const Vector& velocity, const Colour& colour): Shape::Shape(colour), centre(centre), size(size), velocity(velocity) {}

#pragma mark - Getters

Point  Boid::getCentre()   const { return centre;   }
double Boid::getSize()     const { return size;     }
Vector Boid::getVelocity() const { return velocity; }

# pragma mark Setters

void Boid::setCentre(  const Point  &newValue) { centre = newValue; }
void Boid::setSize(    const double  newValue) { size = newValue; }
void Boid::setVelocity(const Vector &newValue) { velocity = newValue; }

# pragma mark - Drawable implementation

void Boid::draw() const {
	Shape::draw();
	
	double angle = velocity.angle();
	
	Vector headDirection = velocity;
	headDirection.normalize();
	Point head = centre + headDirection * size;
	
	double tailOffset = M_PI*tailSize - tailSizeIncrementor;
	Point leftTail = Point(centre.x+size*cos(angle+tailOffset), centre.y+size*sin(angle+tailOffset));
	Point rightTail= Point(centre.x+size*cos(angle-tailOffset), centre.y+size*sin(angle-tailOffset));
	
	glBegin(GL_POLYGON);
	glVertex2d(head.x, head.y);
	glVertex2d(leftTail.x, leftTail.y);
	glVertex2d(rightTail.x, rightTail.y);
	glEnd();
}

# pragma mark Animatable implementation

void Boid::update(Scene &scene) {
	centre = centre + velocity;
	
	#pragma mark flap
	if (tailSizeIncrementor < 0) {
		tailSizeFlip = true;
	} else if (tailSizeIncrementor > tailSizeMaxIncrementor) {
		tailSizeFlip = false;
	}
	tailSizeIncrementor = tailSizeIncrementor + velocity.length()*(tailSizeFlip?.02:-0.02);
}