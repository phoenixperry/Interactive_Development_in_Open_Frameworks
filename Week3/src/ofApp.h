#pragma once

#include "ofMain.h"
#include <iostream>
using namespace std;

class ofApp : public ofBaseApp{
//public is the protection level for these declarations.
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
        void drawBox();
    
        ///fucntions for arduino
        void setupArduino();
        void updateArduino();
    
        //variables for Arduino
    
        //allows for serial output -- we'll do this next week. :)
        ofSerial serial;
        //an arduino object
        ofArduino myArduino;
        //this variable will only be false when the code first runs arduino
        bool bSetupArduino;

        //variables  for game
        float playerRadius;
        float enemySpeed;
        float enemyX;
        float enemyY;
        float enemyRadius;
        int score;
        int speed;
        bool hasLostGame;
        bool firstEnemy;
    
        //new things! Images and sound oh my. 
        ofImage kitty;
        ofImage cup;
        ofImage background;
        ofSoundPlayer music;

};
