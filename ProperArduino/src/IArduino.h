
#ifndef __NightGames__IArduino__
#define __NightGames__IArduino__

#include <stdio.h>
#include "ofMain.h" 
class IArduino {

public:
    void setup(string port);
    void setupArd(const int &version);
    void update();
    void draw();
    ofArduino ard;

};
#endif /* defined(__NightGames__IArduino__) */
