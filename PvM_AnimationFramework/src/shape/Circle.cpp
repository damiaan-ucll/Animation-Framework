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

	const int segments = 30;
	
	const double twoPi = 2 * M_PI;
	const double angleUnit =  twoPi / segments;
	
	glBegin(GL_POLYGON);
	for (double angle = 0; angle < twoPi; angle+=angleUnit) {
		glVertex2f(centre.x + radius * cos(angle), centre.y + radius * sin(angle));
	}
	glEnd();
}

void Circle::bounceOnIntersection(DynamicCircle& circle) const {
	double distance = circle.getCentre().distance(getCentre());
	double radiusSum = circle.getRadius() + getRadius();
	
	if (&circle != this && distance < radiusSum) {
		
		Vector velocity = circle.getVelocity();
		Vector u(getCentre(), circle.getCentre());
		
		double a = velocity.dot(velocity);
		double b = 2 * velocity.dot(u);
		double c = u.dot(u) - radiusSum*radiusSum;
		double d = b*b - 4*a*c;
		
		double t = (-b - sqrt(d)) / 2 / a;
		Point oldCenter = circle.getCentre() + (velocity*t);
		
		Vector u2n(getCentre(), oldCenter);
		u2n.normalize();
		Vector newVelocity = velocity - (2*velocity.dot(u2n) * u2n);
		circle.setVelocity(newVelocity);
		
		circle.setCentre(oldCenter + newVelocity);
		
	}
}