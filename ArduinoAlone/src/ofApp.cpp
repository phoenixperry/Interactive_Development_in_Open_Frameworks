#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ard.connect("/dev/tty.usbmodem1421", 57600);
    ofAddListener(ard.EInitialized, this, &ofApp::setupArd);
}

//--------------------------------------------------------------
void ofApp::update(){
    ard.isArduinoReady();
}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    testLed();
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

void ofApp::testLed(){
    ard.sendDigital(9, ARD_HIGH);
}

void ofApp::setupArd(const int &version){
    cout << "working!" << endl;
    ofRemoveListener(ard.EInitialized, this, &ofApp::setupArd);
    //this is the output on the arduino
    
    ard.sendDigitalPinMode(9, ARD_OUTPUT);
    
    //like say you'd want to send in data instead, do this.
    //ard.sendDigitalPinMode(9, ARD_INPUT);
    cout << "up" <<endl;
}
