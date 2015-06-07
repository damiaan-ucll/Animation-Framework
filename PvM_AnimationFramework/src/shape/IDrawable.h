//
//  IDrawable.h
//  PvM_AnimationFramework
//
//  Created by Damiaan Dufaux on 27/04/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#ifndef __PvM_AnimationFramework__IDrawable__
#define __PvM_AnimationFramework__IDrawable__

#include <stdio.h>

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <windows.h>
#include <GL/glut.h>
#endif

class DynamicCircle;

class IDrawable {
public:
	virtual void draw() const = 0;
	
	virtual void bounceOnIntersection(DynamicCircle& circle) const {};
	
	virtual ~IDrawable() {}
};

#endif /* defined(__PvM_AnimationFramework__IDrawable__) */
