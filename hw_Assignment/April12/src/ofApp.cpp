#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofNoFill();
    ofBackground(0);
    ofSetLineWidth(10);
    ofSetColor(ofRandom(255), ofRandom(255), ofRandom(255));
    

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    int time = ofGetSystemTimeMillis()/100;
    
    ofPushMatrix();
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotateDeg(45);
        
    for (int i=0; i < 400; i+=25){
        ofSetLineWidth(7);
        ofSetColor(time % 10, ofRandom(255), ofRandom(255));
        ofDrawRectangle(i,0,20,20);
        ofRotateDeg(time % 360);
        
    }
    
    for (int k=0; k<500; k+=50){
        ofSetLineWidth(5);
        ofSetColor(ofRandom(255), time%10, ofRandom(255));
        ofDrawCircle(k, 0, 20);
        ofRotateDeg(time% 360);
    }
    
    for (int j=0; j<600; j+=50){
        ofSetLineWidth(2);
        ofSetColor(ofRandom(255), ofRandom(255), time%10);
        ofDrawCircle(j, 0, 10);
        ofRotateDeg(time% 360);
    }
    
    ofPopMatrix();
    
    //ofDrawBitmapString("This is my translated animation", 10, 10);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

