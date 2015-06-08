//
//  Scene.cpp
//  PvM_AnimationFramework
//
//  Created by Damiaan Dufaux on 5/05/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#include "Scene.h"

#include "IDrawable.h"
#include "IAnimatable.h"
#include "WorldWindow.h"

Scene::Scene(const WorldWindow * window) {
	this->window = window;
	drawables.push_back(window);
}

Scene::~Scene() {
	for (auto &drawable : drawables) {
		delete drawable;
	}
	for (auto &animatable : animatables) {
		delete animatable;
	}
	
	delete window;
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