//
//  flock.h
//  PvM_AnimationFramework
//
//  Created by Damiaan Dufaux on 8/06/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#ifndef __PvM_AnimationFramework__flock__
#define __PvM_AnimationFramework__flock__

#include <stdio.h>
#include "Boid.h"

class Flock: public Shape, public IAnimatable {
	std::vector<Boid*> boids;
	
public:

	~Flock();
	Flock(Colour& colour): Shape::Shape(colour) {}
	
	void addBoid(Boid* boid);
	
	#pragma mark - Drawable
	void draw() const;
	
	#pragma mark Animatable
	void update(Scene& scene);

};

#endif /* defined(__PvM_AnimationFramework__flock__) */
