//
//  DynamicCircle.h
//  PvM_AnimationFramework
//
//  Created by Damiaan Dufaux on 27/04/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#ifndef __PvM_AnimationFramework__DynamicCircle__
#define __PvM_AnimationFramework__DynamicCircle__

#include <stdio.h>
#include "IAnimatable.h"
#include "Circle.h"
#include "Vector.h"

class DynamicCircle: public Circle, public IAnimatable {
	
	Vector velocity;
	
public:
	
	DynamicCircle(Point centre, double radius, Colour colour, Vector velocity);
	
	Vector getVelocity() const;
	void   setVelocity(Vector);
	
//	void bounceOnIntersection(DynamicCircle& circle) const;
	void update(Scene& scene);

};

#endif /* defined(__PvM_AnimationFramework__DynamicCircle__) */
