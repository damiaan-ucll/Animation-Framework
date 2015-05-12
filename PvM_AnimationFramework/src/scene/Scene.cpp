//
//  Scene.cpp
//  PvM_AnimationFramework
//
//  Created by Damiaan Dufaux on 5/05/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#include "Scene.h"

std::vector<const IDrawable*>& Scene::getDrawables() {
	return drawables;
}

std::vector<IAnimatable*>& Scene::getAnimatables() {
	return animatables;
}