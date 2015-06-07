#ifndef RENDERER_H_
#define RENDERER_H_

#include <stdio.h>
#include <iostream>
#include "Scene.h"
#include "../shape/DynamicCircle.h"

class Renderer {
	
	Scene & scene;
	
public:
	Renderer(Scene& scene):scene(scene) {}
	void render();
};

#endif /* RENDERER_H_ */