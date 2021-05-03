#include "ofApp.h"


int play = 0;

//--------------------------------------------------------------
void ofApp::setup(){
    
    spring.load("spring.wav");
    spring.setVolume(0.4);
    spring.play();
    
    wave1.load("wave11.png");
    wave2.load("wave22.png");
    wave3.load("wave33.png");

    
    fft = new float[512];
    for (int i = 0; i < 512; i++) {
        fft[i] = 0;
    }
    
    bands = 512;
    decay = 0.9;
    
    ofSetBackgroundColor(255);

    
    for (int i = 0; i < 100; i = i + 1) {
        snow.push_back(ofPoint(ofRandom(ofGetWidth()), ofRandom(ofGetHeight())));
    }
    

}

//--------------------------------------------------------------
void ofApp::update(){
    

    ofSoundUpdate(); // update the sound playing system:

    soundSpectrum = ofSoundGetSpectrum(bands); // get sound frequencies

    for (int i = 0; i < bands; i++) {
        fft[i] *= decay;
        if (fft[i] < soundSpectrum[i]) {
            fft[i] = soundSpectrum[i];
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    float elapsedTime = ofGetElapsedTimef();
    
    int time = int(elapsedTime);
    
    // spring
    if (time < 17){
    
        ofBackground(255);
        ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2); // translate to middle of screen

        int time1 = ofGetSystemTimeMillis() / 100;
        ofNoFill();

        for (int i = 0; i < 400; i += 20) {
            int r = 255;
            int g = ofRandom(160, 255);
            int b = ofRandom(160, 255);
            ofSetColor(r, g, b);
            ofSetLineWidth(12);
            ofSetCircleResolution(64);
            ofDrawCircle(0, 0, (fft[i] + 0.015) * 800.0);
            ofRotateDeg(time1 % 180);
        }

        if (time >= 4) {
            for (int i = 0; i < 400; i += 30) {
                int r = 255;
                int g = ofRandom(160, 255);
                int b = ofRandom(160, 255);
                ofSetColor(r, g, b);
                ofSetCircleResolution(128);
                ofSetLineWidth(18);
                ofDrawCircle(ofGetWidth()/6, 0, (fft[i]+ 0.012) * 500.0);
                ofRotateDeg(time1 % 360);
            }
        }
        
        if (time >= 8) {
            for (int i = 0; i < 400; i += 50) {
                int r = 255;
                int g = ofRandom(100, 255);
                int b = ofRandom(100, 255);
                ofSetColor(r, g, b);
                ofSetCircleResolution(128);
                ofSetLineWidth(20);
                ofDrawCircle(ofGetWidth()/3, 0, (fft[i]+ 0.01) * 300.0);
                ofRotateDeg(time1 % 360);
            }
        }
        
        
    }
    
    // summer
    else if (time < 34) {
        
        ofSetBackgroundColor(240);
        
        if (play == 0) {
            spring.stop();
            summer.load("summer.wav");
            summer.setVolume(0.4);
            summer.play();
            play = 1;
            
        }
        
        for (int i = 0; i < snow.size(); i = i + 1) {
        snow[i].y = snow[i].y + 5;
        
        if (snow[i].y > ofGetHeight()) {
          snow[i].y = 0;
        }
        ofSetColor(61, 161, 255);
        ofSetLineWidth(3.5);
        ofDrawLine(snow[i].x, snow[i].y, snow[i].x, ofRandom(snow[i].y, snow[i].y+30));
        }
        
        if (time >= 19) {
            wave3.draw(0,ofGetHeight()-130);
        }
        if (time >= 23){
            wave2.draw(0,ofGetHeight()-160);
        }
        if (time >= 27){
            wave1.draw(0,ofGetHeight()-250);
        }

        
    }
    
    // fall
    else if (time < 57) {
        ofBackground(255);
        
        if (play == 1) {
            summer.stop();
            fall.load("fall.wav");
            fall.play();
            play = 2;
        }
        
        if (time >= 35){
            for(int i=0; i<200; i++){
                ofSetRectMode(OF_RECTMODE_CENTER);
                ofSetColor(255,ofRandom(150,200),ofRandom(60,150));
                ofDrawRectangle(ofGetWidth()/2, i*4, sin(i + ofGetElapsedTimef())*128, 5);
            }
        }
        
        if (time >= 41){
            for(int i=0; i<200; i++){
                ofSetRectMode(OF_RECTMODE_CENTER);
                ofSetColor(255,ofRandom(60,150),ofRandom(55,145));
                ofDrawRectangle(200, i*4, sin(i + ofGetElapsedTimef())*128, 5);
            }
        }
        
        if (time >= 47){
            for(int i=0; i<200; i++){
                ofSetRectMode(OF_RECTMODE_CENTER);
                ofSetColor(255,ofRandom(205,230),ofRandom(50,130));
                ofDrawRectangle(ofGetWidth()-200, i*4, sin(i + ofGetElapsedTimef())*128, 5);
            }
        }
        
    }

    // winter
    else if (time < 69) {
        ofBackground(255);
        if (play == 2) {
            fall.stop();
            winter.load("winter.wav");
            winter.play();
            play = 3;
        }
        
        for (int i = 0; i < snow.size(); i = i + 1) {
        snow[i].y = snow[i].y + 5;
        
        if (snow[i].y > ofGetHeight()) {
          snow[i].y = 0;
        }
        ofFill();
        ofSetColor(201, 222, 255);
        ofDrawCircle(snow[i].x + (mouseX/10), snow[i].y, ofRandom(1,7));
        }
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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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

