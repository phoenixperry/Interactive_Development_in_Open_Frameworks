#include "ofApp.h"

//note how all of the variables and fucntion prototypes are now in the header file? :)

//--------------------------------------------------------------
void ofApp::setup(){
    
    //make the connection. Remember you need to replace the string here with your actual port.
    // 57600 is the baud speed.
    myArduino.connect("/dev/tty.usbmodem1421", 57600);
    
    //a test to see if the arduion has been set up yet?
    bSetupArduino= false;
    
    playerRadius =60;
    enemyY = 0-enemyRadius;
    enemyX = ofRandom(ofGetWidth());
    enemyRadius = 50;
    enemySpeed =10;
    score = 0;
    ofSetVerticalSync(true);
    hasLostGame = false;
    speed = 4 ;
    ofSetCircleResolution(250);
    //make sure sound can play the first enemy drop when the game beings.
    firstEnemy = true;

    //add some sound and images!
    kitty.loadImage("kitty.png");
    music.loadSound("drop.mp3");
    cup.loadImage("starSucks.png");
    background.loadImage("backGround.jpg");
}

void ofApp::updateArduino(){
    //a call to update the arduion data ins and out
    myArduino.update();
}


//this will set up all of my arduio pins

void ofApp::setupArduino(){
    //this you can use ARD_OUTPUT but also ARD_INPUT to receive data! :)
    myArduino.sendDigitalPinMode(9, ARD_OUTPUT);

  
}
//--------------------------------------------------------------
void ofApp::update(){
    
    //if my arduio is ready
    if ( myArduino.isArduinoReady()){

        // 1st: setup the arduino if haven't already:
        if (bSetupArduino == false){
            
// how to read in and out to the console.
//            cout << "arduino running" << endl;
//            cout << "what should the score be?" << endl;
//            cin >> score;
//            cout << "you set the score to " << score << endl;
            
            //this fundtion assigns the pins
            setupArduino();
            // we've starting running arduino so no need to call setup again! :)
            bSetupArduino = true;	// only do this once
        }
        
        // 2nd do the update of the arduino
        updateArduino();
    }

    
    
    enemyY +=speed;
    //reset
    if(enemyY > ofGetHeight()+enemyRadius*2 && hasLostGame == false)
    {
        enemyY = 0-enemyRadius;
        enemyX = ofRandom(ofGetWidth());
        speed++;
        score++;
        enemyRadius+=10;
        music.play();
    }
    
    if(ofDist(mouseX, mouseY, enemyX, enemyY) <= playerRadius+enemyRadius)
    {
        hasLostGame =true;
    }
    enemyY +=speed;
}

//--------------------------------------------------------------
void ofApp::draw(){
    background.draw(0, 0, ofGetWidth(), ofGetHeight());
    
    //this if statement makes sure the sound is triggered the very first time the game runs.
    if(firstEnemy)
    {
        firstEnemy = false;
        music.play();
    }
    
    if(hasLostGame==false){
        
        //turn the 9th pin on the arudio on. For this case, you'll turn on an LED
        myArduino.sendDigital(9, ARD_HIGH);
        //draw the player
        kitty.draw(mouseX-playerRadius, mouseY-playerRadius);

        ofSetColor(255, 0, 0);
        //draw the villan and make it red!
        cup.draw(enemyX, enemyY, enemyRadius, enemyRadius);
        
        //show the score
        ofSetColor(255, 255, 255);
        ofDrawBitmapString("The score is " + ofToString(score), 20,20);
    }
    
    if(hasLostGame == true)
    {
       ofDrawBitmapString("Sorry, you lost! \nYour final score: " + ofToString(score) + "\nPress any key to restart!", 20, 20); // Draw our losing message and final score.
        
        //turn off the LED  light by setting the 9th pin to ARD_LOW
        myArduino.sendDigital(9, ARD_LOW);
       
    }
    
}
void ofApp::drawBox(){
    
}
//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    hasLostGame = false;
    enemyRadius = 50;
    speed = 1;
    enemyY = 0-enemyRadius;
    enemyX = ofRandom(ofGetWidth());
    score = 0;
    cout << key << endl << " was the key";
    if(key==32)
    {
        cout << "space";
    }
    
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
