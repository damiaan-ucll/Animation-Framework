//
//  Scene.cpp
//  PvM_AnimationFramework
//
//  Created by Damiaan Dufaux on 5/05/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#include "Scene.h"

Scene::~Scene() {
	for (auto &drawable : drawables) {
		delete drawable;
	}
	for (auto &animatable : animatables) {
		delete animatable;
	}
	
	drawables.clear();
	animatables.clear();
}

std::vector<const IDrawable*>& Scene::getDrawables() {
	return drawables;
}

std::vector<IAnimatable*>& Scene::getAnimatables() {
	return animatables;
}

void Scene::addDrawable(IDrawable *drawable) {
	drawables.push_back(drawable);
}

void Scene::addAnimatable(IAnimatable *animatable) {
	animatables.push_back(animatable);
}