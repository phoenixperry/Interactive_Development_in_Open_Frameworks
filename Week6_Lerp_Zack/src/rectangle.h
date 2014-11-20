//
//  rectangle.h
//  Rect1
//
//  Created by Phoenix Perry on 30/10/14.
//
//

#ifndef __Rect1__rectangle__
#define __Rect1__rectangle__

#include <stdio.h>
#include "ofMain.h"
class rectangle {
    
public:
    
    rectangle();
    
    void draw();
    void interpolateByPct(float myPct);
    
    ofPoint		pos;
    ofPoint		posa;
    ofPoint		posb;
    float		pct;	// what pct are we between "a" and "b"
    float		shaper;
    
    
    
};


#endif /* defined(__Rect1__rectangle__) */
