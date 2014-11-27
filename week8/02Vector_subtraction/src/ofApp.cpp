#include "ofApp.h"
ofPoint mouse; 
ofPoint center; 
//--------------------------------------------------------------
void ofApp::setup(){
	ofSetColor(255); 
	center = ofPoint(ofGetWidth()/2, ofGetHeight()/2); 

}

//--------------------------------------------------------------
void ofApp::update(){
		mouse = ofPoint(mouseX, mouseY); 
		mouse -= center; 
		//multiplication my scalar
		mouse *= 0.5; 
		//division 
	//	mouse = mouse / 2;
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetBackgroundColor(0);
	ofTranslate(center); 
	ofLine(0,0, mouse.x, mouse.y);
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
