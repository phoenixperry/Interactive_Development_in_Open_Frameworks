//
//  rectangle.h
//  classPointerExample
//
//  Created by Phoenix Perry on 05/11/14.
//
//

#ifndef __classPointerExample__rectangle__
#define __classPointerExample__rectangle__

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

#endif /* defined(__classPointerExample__rectangle__) */
