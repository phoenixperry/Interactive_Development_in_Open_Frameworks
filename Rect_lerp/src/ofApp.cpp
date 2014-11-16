
#include "ofApp.h"
struct Circle{
    int x;
    int y;
    float speed;

};
vector <Circle> myCircles;

class Rect_2{
public:
    ofPoint pos;
    ofPoint posa;
    ofPoint posb;
    float shaper;
    float pct;
    Rect_2(){
        shaper= 1.0;
    }
    
    void interp(float myPct){
        pct = powf(myPct, shaper);
        pos.x = (1-pct)* posa.x + (pct) *posb.x;
   
        pos.y = (1-pct) * posa.y + (pct) * posb.y;
        cout << pos.y << endl;
    }
    void draw(){
        ofFill();
        ofSetRectMode(OF_RECTMODE_CENTER);
        ofRect(pos.x, pos.y, 20, 20);
    }
    
};

Rect_2 myRect;
float pct;
//--------------------------------------------------------------
void ofApp::setup(){
    ofSetVerticalSync(true);
    ofBackground(30, 30, 30);
    myRect.posa.x = 100;
    myRect.posa.y = 100;
    myRect.posb.x = 100;
    myRect.posb.y = 500;
    myRect.shaper= 0.2;
    myRect.interp(0);
    pct = 0;
    
    for(int i =0; i <10; i++)
    {
        Circle c;
        c.x = i*10;
        c.y = i*10;
        c.speed = .5*i;
        myCircles.push_back(c);
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){
    pct += 0.003;
    if(pct >1) pct = 0;
    myRect.interp(pct);
    
    for(int i =0; i < myCircles.size(); i++)
    {
        myCircles.at(i).x += myCircles.at(i).speed;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(20,255,10);
    myRect.draw();
    for(int i =0; i < myCircles.size(); i++)
    {
        
        ofEllipse(myCircles.at(i).x, myCircles.at(i).y, 50, 50);
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
