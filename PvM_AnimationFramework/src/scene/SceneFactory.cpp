//
//  SceneFactory.cpp
//  PvM_AnimationFramework
//
//  Created by Damiaan Dufaux on 12/05/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#include "SceneFactory.h"

Boid* readBoid(std::istringstream& lineStream, Colour& colour) {
	double x, y, size, vx, vy;
	lineStream >> x >> y >> size >> vx >> vy;
	Boid *circle = new Boid(Point(x, y), size, Vector(vx, vy), colour);
	return circle;
}

Scene* SceneFactory::createScene(std::string const & sceneFile, const WorldWindow* window) {
	std::ifstream inf(sceneFile);
	
	if (!inf) {
		std::cout << sceneFile << " could not be opened!\n";
		exit(1);
	}
	
	Scene * const scene = new Scene(window);
	
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
		} else if (keyword == "boid") {
			Boid* boid = readBoid(lineStream, colour);
			scene->addDrawable(boid);
			scene->addAnimatable(boid);
		} else if (keyword == "flock") {
			int boidCount;
			Flock* flock = new Flock(colour);
			lineStream >> boidCount;
			
			for (int i=0 ; i<boidCount; ++i) {
				std::getline(inf, line);
				std::istringstream lineStream(line);
				
				Boid* boid = readBoid(lineStream, colour);
				flock->addBoid(boid);
				
			}

			scene->addDrawable(flock);
			scene->addAnimatable(flock);
		}
	}
	
	std::cout << scene << " (creator)\n";
	
	return scene;
}