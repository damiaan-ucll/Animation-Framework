//
//  SceneFactory.h
//  PvM_AnimationFramework
//
//  Created by Damiaan Dufaux on 12/05/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#ifndef __PvM_AnimationFramework__SceneFactory__
#define __PvM_AnimationFramework__SceneFactory__

#include <stdio.h>
#include <fstream>
#include <string>
#include <iostream>
#include <unistd.h>
#include <sstream>

#include "Scene.h"
#include "Circle.h"
#include "DynamicCircle.h"

class SceneFactory {
public:
	static Scene createScene(std::string const & path);
};

#endif /* defined(__PvM_AnimationFramework__SceneFactory__) */
