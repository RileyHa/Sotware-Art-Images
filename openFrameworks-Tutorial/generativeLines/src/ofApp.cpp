#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetWindowTitle("oF example title");
    ofBackground(255, 255, 255);
    ofSetFrameRate(15);

}

//--------------------------------------------------------------
void ofApp::update(){
    
    myLine.addVertex(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    int stepSize = 40;
    ofColor myDrawCol;
    myDrawCol.setHsb(255, 255, 255, 80);
    ofSetColor(myDrawCol);
    
    ofSetLineWidth(10);
    /*
    
    for(int i = 0; i<100; i++){
        ofDrawLine(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
        
    }
    
    ofDrawLine(100, 100, 400, 400);
    ofDrawLine(400, 400, 200, 300);
     
    */
    
    myLine.draw();
    

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
