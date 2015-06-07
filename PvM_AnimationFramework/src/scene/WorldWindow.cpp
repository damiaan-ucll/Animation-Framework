//
//  WorldWindow.cpp
//  PvM_AnimationFramework
//
//  Created by Damiaan Dufaux on 7/06/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#include "WorldWindow.h"

void WorldWindow::bounceOnIntersection(DynamicCircle& circle) const {
	const Point& centre = circle.getCentre();
	const Vector& velocity = circle.getVelocity();
	const double& radius = circle.getRadius();
	
	if (centre.x+velocity.x+radius > right) {
		circle.setVelocity(Vector(-fabs(velocity.x), velocity.y));
	} else if (centre.x+velocity.x-radius < left) {
		circle.setVelocity(Vector(fabs(velocity.x), velocity.y));
	}
	if (centre.y+velocity.y+radius > top) {
		circle.setVelocity(Vector(velocity.x, -fabs(velocity.y)));
	} else if (centre.y+velocity.y-radius < bottom) {
		circle.setVelocity(Vector(velocity.x, fabs(velocity.y)));
	}
}