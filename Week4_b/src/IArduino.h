//
//  IArduino.h
//  CirclesSpazingOut
//
//  Created by Phoenix Perry on 30/10/14.
//
//

#ifndef __CirclesSpazingOut__IArduino__
#define __CirclesSpazingOut__IArduino__

#include <stdio.h>
#include "ofMain.h"
using namespace std;

class IArduino{
public:
    IArduino(){};
    void setup(string port);
    void setupArd(const int &version);
    void update();
    void draw();
    void testLed();
    ofArduino ard; 
    
    
    
    
};

#endif /* defined(__CirclesSpazingOut__IArduino__) */
