#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    string thing1;
    cout << " type in your favorite thing and press return " << endl;
    cin >> thing1;
    cout << " thing 1 will now hold the value from the user which was "<< thing1<< endl;
    for(int x=0; x < 11; x++)
    {
        circle c;
        c.x = ofRandom(ofGetWidth());
        c.y = ofRandom(ofGetHeight());
        c.width= ofMap(c.x,0,1024, 0,100);
     
        c.height = c.width;
        circles.push_back(c);
    }
    //for loop ended
    x = 10;
    
    int &rx= x;
    
    passByValue(x);
    cout<< x << " is the value of x after running the function passByValue" <<endl;
    
    passByReference(rx);
    
    cout << rx << " is the value of rx after running the function pass by reference"<<endl;
    
      cout << x << " is the value of x after running the function pass by reference"<<endl;
}
void ofApp::passByReference(int &ref)
{
    ref *=10;
}
void ofApp::passByValue(int x)
{
    x=x+10;
    cout << &x << " is the address in memory where the value passed into this function lives\n" << x << " is the value of x " <<endl;
    
}
//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i=0; i<circles.size(); i++)
    {
        ofSetColor(circles[i].width, 255,255);
        ofFill();
        ofEllipse(circles[i].x, circles[i].y, circles[i].width, circles[i].height);
       // cout << circles[i].x << endl;
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
