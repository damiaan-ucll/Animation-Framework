//
//  DynamicCircle.cpp
//  PvM_AnimationFramework
//
//  Created by Damiaan Dufaux on 27/04/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#include "DynamicCircle.h"

DynamicCircle::DynamicCircle(Point centre, double radius, Colour colour, Vector velocity): Circle::Circle(centre, radius, colour), velocity(velocity) {}

Vector DynamicCircle::getVelocity() const {
	return velocity;
}

void DynamicCircle::setVelocity(Vector newVelocity) {
	velocity = newVelocity;
}

void DynamicCircle::update(Scene& scene) {
	if (getCentre().x+velocity.x+getRadius() > 1000) {
		velocity.x = -fabs(velocity.x);
	} else if (getCentre().x+velocity.x-getRadius() < 0) {
		velocity.x = fabs(velocity.x);
	}
	if (getCentre().y+velocity.y+getRadius() > 500) {
		velocity.y = -fabs(velocity.y);
	} else if (getCentre().y+getVelocity().y-getRadius() < 0) {
		velocity.y = fabs(velocity.y);
	}
	
	setCentre(getCentre() + velocity);
}