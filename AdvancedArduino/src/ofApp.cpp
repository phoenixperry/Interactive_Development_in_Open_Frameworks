#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ard.connect("/dev/tty.usbmodem1411");
    ofAddListener(ard.EInitialized, this, &ofApp::setupArd);
    
    me.name = "phoenix";
    me.age = 39;
    me.location = "nyc";
    people.push_back(me);
    
    you.name = "tim";
    you.age = 18;
    you.location = "hilversum";
    people.push_back(you);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
        ard.sendDigital(9, ARD_HIGH);
        cout << people.at(0).name;
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
        ard.sendDigital(9, ARD_LOW);
        cout << people.at(1).name << num[1];

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
