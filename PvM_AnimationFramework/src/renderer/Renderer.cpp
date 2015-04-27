#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <windows.h>
#include <GL/glut.h>
#endif

#include "../renderer/Renderer.h"

void Renderer::render(){
	
	c.draw();
	c.update();
}
