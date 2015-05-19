//
//  IAnimatable.h
//  PvM_AnimationFramework
//
//  Created by Damiaan Dufaux on 27/04/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#ifndef __PvM_AnimationFramework__IAnimatable__
#define __PvM_AnimationFramework__IAnimatable__

#include <stdio.h>
#include "Shape.h"

class IAnimatable {
public: virtual void update() = 0;
};

#endif /* defined(__PvM_AnimationFramework__IAnimatable__) */
