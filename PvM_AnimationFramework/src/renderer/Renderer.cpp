#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <windows.h>
#include <GL/glut.h>
#endif

#include "../renderer/Renderer.h"
#include "../shape/Circle.h"

void Renderer::render(){
	const Circle c(Point(250, 250), 150, Colour(1,1,0));
	c.draw();
}
