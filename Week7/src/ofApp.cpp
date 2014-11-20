#include "ofApp.h"
#define NUMBER_OF_KEYS 10 


//--------------------------------------------------------------
void ofApp::setup(){
    ofSoundStreamSetup(2, 0, this, 44100, 256, 4);
    // makes audio playout of OF

    /*
     Generators and ControlGenerators both output a steady stream of data.
     Generators output at the sample rate (in this case, 44100 hertz.
     ControlGenerators output at the control rate, which is much lower than the sample rate.
     */
    
    // create a named parameter on the synth which we can set at runtime

     // convert a midi note to a frequency (plugging that parameter into another object)
    ControlGenerator midiNote = synth.addParameter("midiNumber");
    
    ControlGenerator noteFreq = ControlMidiToFreq().input(midiNote);
    
       // Here's the actual noise-making object
    Generator tone =  SawtoothWave().freq(noteFreq);
    
       // Let's put a filter on the tone
    tone = LPF12().input(tone).Q(2).cutoff((noteFreq*2) +SineWave().freq(3)
                                           *0.5* noteFreq);
    
    // It's just a steady tone until we modulate the amplitude with an envelope
    ControlGenerator envelopeTrigger = synth.addParameter("trigger");
    
    Generator toneWithEnvelope = tone * ADSR().attack(0.01).decay(1.5).sustain(0).release(0).trigger(envelopeTrigger).legato(true);
      // let's send the tone through some delay
    Generator toneWithDelay = StereoDelay(0.5,.7).input(toneWithEnvelope).wetLevel(0.1).feedback(0.2);
    //play it on your synth
    synth.setOutputGen(toneWithDelay);
    
    ///connect to arduino
    ard.connect("/dev/tty.usbmodem1421", 57600);
    
    ofAddListener(ard.EInitialized, this, &ofApp::setupArd);
}

void ofApp::trigger(){
    static int twoOctavePentatonicScale[10] = {0, 2, 4, 7, 9, 12, 14, 16, 19, 21};
    
    int degreeToTrigger = floor(ofClamp(scaleDegree, 0, 9));
    
    // set a parameter that we created when we defined the synth
    synth.setParameter("midiNumber", 44 + twoOctavePentatonicScale[degreeToTrigger]);
    
    // simply setting the value of a parameter causes that parameter to send a "trigger" message to any
    // using them as triggers
    synth.setParameter("trigger", 1);

}

void ofApp::setupArd(const int &version){
    cout << "working!" << endl;
    ofRemoveListener(ard.EInitialized, this, &ofApp::setupArd);
    //this is the output on the arduino for an analog sensor!!! :)
    
    ard.sendAnalogPinReporting(0, ARD_ANALOG);

    ofAddListener(ard.EAnalogPinChanged, this, &ofApp::analogPinChanged);
    
}
//--------------------------------------------------------------
void ofApp::update(){
    ard.update();
}

void ofApp::analogPinChanged(const int & pinNum) {
    cout << "data recieved" << endl;
    float value = ard.getAnalog(pinNum);

    cout << "data recieved" << endl;
    trigger();
    
    int newScaleDegree = value * NUMBER_OF_KEYS / ofGetWindowWidth();
    scaleDegree = newScaleDegree;
    trigger();
}

void ofApp::audioRequested (float * output, int bufferSize, int nChannels){
    synth.fillBufferOfFloats(output, bufferSize, nChannels);
}

//--------------------------------------------------------------
void ofApp::draw(){

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
