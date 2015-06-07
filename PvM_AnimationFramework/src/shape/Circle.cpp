//
//  Circle.cpp
//  PvM_AnimationFramework
//
//  Created by Damiaan Dufaux on 27/04/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#include "Circle.h"
#include "DynamicCircle.h"

Point Circle::getCentre() const {
	return centre;
}

void Circle::setCentre(Point newCentre) {
	centre = newCentre;
}

double Circle::getRadius() const {
	return radius;
}

void Circle::setRadius(double newRadius) {
	radius = newRadius;
}

void Circle::draw() const {
	Shape::draw();

	const int segments = 19;
	
	const double twoPi = 2 * M_PI;
	const double angleUnit =  twoPi / segments;
	
	glBegin(GL_POLYGON);
	for (double angle = 0; angle < twoPi; angle+=angleUnit) {
		glVertex2f(centre.x + radius * cos(angle), centre.y + radius * sin(angle));
	}
	glEnd();
}

void Circle::bounceOnIntersection(DynamicCircle& circle) const {
	double cdistance = circle.getCentre().distance(getCentre());
	double radiusSum = circle.getRadius() + getRadius();
	if (&circle != this && cdistance < radiusSum) {
		circle.setVelocity(Vector(0, 0));
	}
}