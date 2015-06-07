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
	
	for (auto &drawable : scene.getDrawables()) {
		drawable->bounceOnIntersection(*this);
	}
	
	setCentre(getCentre() + velocity);

}