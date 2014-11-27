#include "ofApp.h"

//--------------------------------------------------------------

void ofApp::setup(){
    
    //set up the circles
    for(int i =0; i < 10; i ++ )
    {
        Circle c;
        c.x = 10*i;
        c.y = 10 * i;
        c.width = 10*i;
        c.height = 10*i;
        cout << c.x ;
        myCircles.push_back(c);
    }
        cout << x[2] << " this is an array" << endl;
    
        cout << myCircles.size() << " number of elements in the array"<<endl;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    //draw the circles
      for(int i =0; i < 10; i ++ )
      {
          ofSetColor(i*20, 255,255);
          ofEllipse((myCircles[i].x*ofRandom(1)), myCircles[i].y,myCircles[i].width, myCircles[i].height);
      }
 
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
