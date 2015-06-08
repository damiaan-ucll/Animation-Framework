//
//  flock.cpp
//  PvM_AnimationFramework
//
//  Created by Damiaan Dufaux on 8/06/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#include "flock.h"

Flock::~Flock() {
	for (auto &boid : boids) delete boid;
}

void Flock::addBoid(Boid* boid) {
	boids.push_back(boid);
}

void Flock::draw() const {
	for (auto &boid : boids) boid->draw();
}

void Flock::update(Scene &scene) {
	for (auto &boid : boids) boid->update(scene);
}