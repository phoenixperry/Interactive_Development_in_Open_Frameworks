#include "ofApp.h"

//--------------------------------------------------------------
ofPoint center; 
ofPoint mouse; 
float m; 

void ofApp::setup(){
	ofColor(255); 
	center = ofPoint(ofGetWidth()/2, ofGetHeight()/2);
}

//--------------------------------------------------------------

void ofApp::update(){
	mouse = ofPoint(mouseX, mouseY); 
	mouse -= center; 
	
	m = mouse.length(); 


	cout << m << " is the magnitude of m" <<endl; 
	//unit vectors 
	mouse.normalize(); 
	mouse*=50;
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofRect(0,0,m,10); 
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
