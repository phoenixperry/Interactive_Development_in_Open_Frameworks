#pragma once

#include "ofMain.h"
struct Circle {
    int x = 0;
    int y = 10;
    int width = 10;
    int height = 10;
};
class ofApp : public ofBaseApp{

	public:
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
    
        vector<Circle> myCircles;
        int x[8] = {0,1,2,3,4,5,6,7};
};