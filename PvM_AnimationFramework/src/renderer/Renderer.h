#ifndef RENDERER_H_
#define RENDERER_H_

#include "../shape/DynamicCircle.h"

class Renderer {
	
	DynamicCircle c = DynamicCircle(Point(250, 250), 150, Colour(1,1,0), Vector(5,0));
	
public:
	Renderer() {}
	void render();
};

#endif /* RENDERER_H_ */

