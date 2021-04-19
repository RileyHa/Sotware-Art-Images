#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetFrameRate(60);
    ofBackground(255);
    
    ofSetLineWidth(4);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    int time = ofGetSystemTimeMillis()/10;
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    
    int radiusSpan = 20;
    
    ofNoFill();
    
    for (int radius = ofGetWidth(); radius > radiusSpan; radius -= radiusSpan){
        
        ofSetColor(ofRandom(255), time%10, ofRandom(255));
        
        ofRotate(ofGetFrameNum() * -0.01);
        this->drawShape(radius);
        
    }
    
    this->drawShape(radiusSpan*2);

}

//--------------------------------------------------------------
void ofApp::drawShape(int radius){
    
    int degSpan = 36;
    
    ofBeginShape();
    
    for (int deg = 0; deg < 360; deg += degSpan){
        
        ofVertex(ofPoint(radius * cos(deg * DEG_TO_RAD), radius * sin(deg * DEG_TO_RAD)));
    }
    
    ofEndShape(true);
}
