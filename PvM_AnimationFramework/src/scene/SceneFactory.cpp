//
//  SceneFactory.cpp
//  PvM_AnimationFramework
//
//  Created by Damiaan Dufaux on 12/05/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#include "SceneFactory.h"
#include <unistd.h>

Scene SceneFactory::createScene() {
	std::ifstream inf("test");
	
	std::string firstLine;
	std::getline(inf, firstLine);
	std::cout << getcwd(NULL, 0);
	
	return Scene();
}