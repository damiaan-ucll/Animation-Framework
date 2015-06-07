//
//  Scene.h
//  PvM_AnimationFramework
//
//  Created by Damiaan Dufaux on 5/05/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#ifndef __PvM_AnimationFramework__Scene__
#define __PvM_AnimationFramework__Scene__

#include <stdio.h>
#include <vector>
#include "../shape/IDrawable.h"
#include "../shape/IAnimatable.h"

class Scene {
	
	std::vector<const IDrawable*> drawables;
	std::vector<IAnimatable*> animatables;
	
public:
	
	Scene() {}
	~Scene();
	
	std::vector<const IDrawable*>& getDrawables();
	std::vector<IAnimatable*>& getAnimatables();
	
	void addDrawable(IDrawable* drawable);
	void addAnimatable(IAnimatable* drawable);
	
};

#endif /* defined(__PvM_AnimationFramework__Scene__) */
