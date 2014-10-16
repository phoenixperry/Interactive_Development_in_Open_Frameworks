#include "ofApp.h"

float playerRadius;
float enemySpeed;
float enemyX;
float enemyY;
float enemyRadius;
int score;
int speed;
bool hasLostGame;
ofSerial serial;

ofArduino myArduino;

//--------------------------------------------------------------
void ofApp::setup(){
    myArduino.connect("/dev/tty.usbmodem1421", 57600);
    bSetupArduino	= false;
    
    playerRadius =60;
    enemyY = 0-enemyRadius;
    enemyX = ofRandom(ofGetWidth());
    enemyRadius = 50;
    enemySpeed =10;
    score = 0;
    ofSetVerticalSync(true);
    hasLostGame = false;
    speed = 4 ;
    ofSetCircleResolution(250);
    bSetupArduino = false;
    
}
void ofApp::updateArduino(){
    myArduino.update();
}


void ofApp::setupArduino(){
    myArduino.sendDigitalPinMode(9, ARD_OUTPUT);
  //  serial.setup("COM8", 9600);
  
}
//--------------------------------------------------------------
void ofApp::update(){
 
    if ( myArduino.isArduinoReady()){

        // 1st: setup the arduino if haven't already:
        if (bSetupArduino == false){
            cout << "arduino running" << endl;
            setupArduino();
            bSetupArduino = true;	// only do this once
        }
        // 2nd do the update of the arduino
        updateArduino();
    }

    
    
    enemyY +=speed;
    //reset
    if(enemyY > ofGetHeight()+enemyRadius*2 && hasLostGame == false)
    {
        enemyY = 0-enemyRadius;
        enemyX = ofRandom(ofGetWidth());
        speed++;
        score++;
        enemyRadius+=10;
    }
    
    if(ofDist(mouseX, mouseY, enemyX, enemyY) <= playerRadius+enemyRadius)
    {
        hasLostGame =true;
    }
    enemyY +=speed;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0, 0, 0);
    
    if(hasLostGame==false){
        myArduino.sendDigital(9, ARD_HIGH);
        ofSetColor(255, 0, 0);

        ofCircle(enemyX, enemyY, enemyRadius);
        
        ofSetColor(0, 0, 255);
        ofCircle(mouseX, mouseY, playerRadius);
        
        ofSetColor(255, 255, 255);
        ofDrawBitmapString("The score is " + ofToString(score), 20,20);
    }
    
    if(hasLostGame == true)
    {
       ofDrawBitmapString("Sorry, you lost! \nYour final score: " + ofToString(score) + "\nPress any key to restart!", 20, 20); // Draw our losing message and final score.
        myArduino.sendDigital(9, ARD_LOW);
    }
    
}
void ofApp::drawBox(){
    
}
//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    //cout << key << endl;
    if(key==359)
    {
        ofSetColor(255, 20, 100);
        ofEllipse(100, 100, ofGetWidth()/2, ofGetHeight()/2);
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    hasLostGame = false;
    enemyRadius = 50;
    speed = 1;
    enemyY = 0-enemyRadius;
    enemyX = ofRandom(ofGetWidth());
    score = 0;
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
