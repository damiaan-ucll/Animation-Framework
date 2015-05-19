#ifndef RENDERER_H_
#define RENDERER_H_

#include "../shape/DynamicCircle.h"
#include "Scene.h"

class Renderer {
	
	Scene scene;
	
public:
	Renderer(Scene& scene) { this->scene = scene; }
	void render();
};

#endif /* RENDERER_H_ */

