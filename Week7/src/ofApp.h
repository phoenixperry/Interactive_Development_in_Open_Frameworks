#pragma once

#include "ofMain.h"
#include "ofxTonic.h"
using namespace Tonic;

class ofApp : public ofBaseApp{
public:
    //synth stuff here
    ofxTonicSynth synth;
    int scaleDegree;
    void trigger();
    void setScaleDegreeBasedOnMouseX();
    
    void audioRequested (float * output, int bufferSize, int nChannels);
    //arduino stuff here:
    ofArduino ard;
    void setupArd(const int &version);
    void analogPinChanged(const int &pinNum);
    float lightLevel;
    
    
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
};
