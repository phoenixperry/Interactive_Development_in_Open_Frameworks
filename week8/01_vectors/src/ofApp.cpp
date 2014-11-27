#include "ofApp.h"

ofVec3f velcocity; 
ofVec3f loc3D; 

//--------------------------------------------------------------
void ofApp::setup(){
	velcocity = ofVec3f(1.0,1.0, 1.0); 
	loc3D =  ofVec3f(100,100,20); 
	ofSetColor(255);
	ofSetVerticalSync(true); 
	ofSetCircleResolution(200);
}

//--------------------------------------------------------------
void ofApp::update(){
	loc3D.x += velcocity.x;
		loc3D.y += velcocity.y;\
				loc3D.z += velcocity.z;

	if((loc3D.x > ofGetWidth()) || loc3D.x < 0)
	{
	   velcocity.x  *= -1; 
	}
	if((loc3D.y > ofGetHeight())|| loc3D.y < 0)
	{
		velcocity.y *=  -1; 
	}
	if(loc3D.z > 20 || loc3D.z < 0 )
	{
		velcocity.z *= -1; 
	}

	
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofFill(); 
	ofEllipse(loc3D.x, loc3D.y, loc3D.z, 100,100);
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
