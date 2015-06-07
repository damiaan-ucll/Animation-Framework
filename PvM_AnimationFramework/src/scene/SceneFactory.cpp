//
//  SceneFactory.cpp
//  PvM_AnimationFramework
//
//  Created by Damiaan Dufaux on 12/05/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#include "SceneFactory.h"

Scene* SceneFactory::createScene(std::string const & sceneFile) {
	std::ifstream inf(sceneFile);
	
	if (!inf) {
		std::cout << "test.dat could not be opened!\n";
		exit(1);
	}
	
	Scene* scene = new Scene();
	
	std::string line;
	Colour colour;
	while (std::getline(inf, line)) {
		std::istringstream lineStream(line);
		std::string keyword;
		
		lineStream >> keyword;
		
		if (keyword == "colour") {
			double a, b, c;
			lineStream >> a >> b >> c;
			colour = Colour(a, b, c);
		} else if (keyword == "circle") {
			double x, y, radius;
			lineStream >> x >> y >> radius;
			Circle *circle = new Circle(Point(x, y), radius, colour);
			
			scene->addDrawable(circle);
		} else if (keyword == "dynamicCircle") {
			double x, y, radius, vx, vy;
			lineStream >> x >> y >> radius >> vx >> vy;
			DynamicCircle *circle = new DynamicCircle(Point(x, y), radius, colour, Vector(vx, vy));
			
			scene->addDrawable(circle);
			scene->addAnimatable(circle);
		}
	}
	
	std::cout << scene << " (creator)\n";
	
	return scene;
}