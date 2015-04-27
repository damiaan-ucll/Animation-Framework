//
//  Shape.h
//  PvM_AnimationFramework
//
//  Created by Damiaan Dufaux on 27/04/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#ifndef __PvM_AnimationFramework__Shape__
#define __PvM_AnimationFramework__Shape__

#include <stdio.h>
#include "IDrawable.h"
#include "../util/Colour.h"

class Shape: IDrawable {
	
	Colour colour;
	
public:
	
	Shape(Colour colour) { this->setColour(colour); }
	
	Colour getColour() const { return colour; }
	void setColour(Colour newColour) { colour = newColour; }
	
	virtual void draw() const;
	
};

#endif /* defined(__PvM_AnimationFramework__Shape__) */
