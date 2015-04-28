//
//  Circle.cpp
//  PvM_AnimationFramework
//
//  Created by Damiaan Dufaux on 27/04/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#include "Circle.h"

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

double interpolateAngle(int segments, int position) {
	return position * M_2_PI / segments;
}

void Circle::draw() const {
	Shape::draw();

	const int segments = 40;
	
	glBegin(GL_POLYGON);
	for (int i = 0; i<segments; ++i) {
		double angle = interpolateAngle(segments, i);
		glVertex2f(centre.x + radius * cos(angle), centre.y + radius * sin(angle));
	}
	glEnd();

}