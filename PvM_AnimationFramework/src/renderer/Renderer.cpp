#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <windows.h>
#include <GL/glut.h>
#endif

#include "../renderer/Renderer.h"

void Renderer::render(){
	glColor3f(1,0,0);
	glBegin(GL_POLYGON);
		glVertex2f(50,100);
		glVertex2f(450,100);
		glVertex2f(250,400);
	glEnd();
}