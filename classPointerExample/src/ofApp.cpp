#include "ofApp.h"

/// this is inside of ofApp


//--------------------------------------------------------------
void ofApp::setup(){
    myRect = new rectangle();
    myRect->interpolateByPct(0);
    pct = 0;
    myRect->posa.x = 0;
    myRect->posa.y = 10;
    myRect->posb.x = ofGetWidth() -100;
    myRect->posb.y = 240;
    myRect->shaper = .8;
}

//--------------------------------------------------------------
void ofApp::update(){
    pct += 0.003f;// increase by a certain amount
    checkLimit(*myRect);
}

void ofApp::checkLimit(rectangle& r)
{
    if (pct > 1) pct = 0;					// just between 0 and 1 (0% and 100%)
    r.interpolateByPct(pct);
}
//--------------------------------------------------------------
void ofApp::draw(){
    myRect->draw();

    
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
