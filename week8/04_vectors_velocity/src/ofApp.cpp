#include "ofApp.h"

class Mover{
public: 
	ofPoint location; 
	ofPoint velocity; 
	ofPoint accel; 
	Mover(){

		//note change this to center of screen 
		//and no velocity for accel example 
		location = ofPoint(ofRandom(ofGetWidth()/2), ofRandom(ofGetHeight()/2));
		velocity = ofPoint(0.0, 0.0);
		accel = ofPoint(-.001, .01);
		//location = ofPoint(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
		velocity = ofPoint(ofRandom(-2.0,2.0), ofRandom(2.0, 2.0));
		
		ofSetColor(100, ofRandom(255), 100); 
	}

	void update(){
		//for accel examp.
		velocity += accel; 
		location += velocity;
		velocity.limit(3);
	}
	void display(){
		ofFill();
		ofCircle(location, 50); 	
	}
	void checkEdges(){
		if(location.x > ofGetWidth()) location.x =0;
		else if(location.x < 0) location.x = ofGetWidth();
		
		if(location.y > ofGetHeight()) location.y =0;
		else if(location.y <0) location.y = ofGetHeight(); 

	}
	//ok this is overkill here but it's a 
	//good thought exercise - sorry processing 
	//vs oF difference. 
	static ofPoint Add(ofPoint a, ofPoint b){
		return a+b; 
	}
};
//--------------------------------------------------------------
Mover *m; 

void ofApp::setup(){
	m = new Mover(); 
	ofSetBackgroundColor(0); 

}

//--------------------------------------------------------------
void ofApp::update(){
	m->update(); 
	m->checkEdges();
}

//--------------------------------------------------------------
void ofApp::draw(){
	m->display(); 
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
