#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <windows.h>
#include <GL/glut.h>
#endif

#include "../renderer/Renderer.h"
#include <stdio.h>
#include <iostream>

void Renderer::render(){
	
	for(auto &drawable : scene.getDrawables()) {
		drawable->draw();
	}
	
	for (auto &animatable : scene.getAnimatables()) {
		animatable->update();
	}
	
}
