#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //this should be your usb port - on windows it will be a com port and
    //possibly need a number here -- I'm researching it currently for you all
    ard.connect("/dev/tty.usbmodem1421", 57600);
    ofAddListener(ard.EInitialized, this, &ofApp::setupArd);

}

//--------------------------------------------------------------
void ofApp::update(){
    ard.update(); 
}

//--------------------------------------------------------------
void ofApp::draw(){
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
        ard.sendDigital(9, ARD_HIGH);
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
        ard.sendDigital(9, ARD_LOW);
    
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

void ofApp::setupArd(const int &version)
{
    ofRemoveListener(ard.EInitialized, this, &ofApp::setupArd);
    ard.sendDigitalPinMode(9, ARD_OUTPUT);
    cout << version << " this is what the ard.EInitialized" << endl;
    
}
