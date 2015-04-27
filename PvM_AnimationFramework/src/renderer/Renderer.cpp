#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <windows.h>
#include <GL/glut.h>
#endif

#include "../renderer/Renderer.h"

void Renderer::render(){
	glColor3f(0,0.4
			  ,1);
	glBegin(GL_POLYGON);
		glVertex2f(700,50);
		glVertex2f(900,50);
		glVertex2f(900,450);
		glVertex2f(700,450);
	glEnd();
}
