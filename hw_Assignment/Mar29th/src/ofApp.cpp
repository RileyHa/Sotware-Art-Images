#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetBackgroundColor(255, 255, 255);
    
    
    gui.setup();
    
    gui.add(strokeSize1.setup("stroke 1 size", 5, 2, 15));
    gui.add(strokeSize2.setup("stroke 2 size", 3, 1, 10));
    gui.add(colorR.setup("Red", 120, 0, 255));
    gui.add(colorG.setup("Green", 100, 0, 255));
    gui.add(colorB.setup("Blue", 180, 0, 255));
    


}

//--------------------------------------------------------------
void ofApp::update(){
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofNoFill();
    
    ofSetColor(colorR, colorG, colorB);
    ofSetLineWidth(strokeSize1);
    
    ofDrawRectangle(200, 350, 600, 100);
    
    ofDrawLine(210, 350, 210, 380);
    ofDrawLine(268, 350, 268, 380);
    ofDrawLine(326, 350, 326, 380);
    ofDrawLine(384, 350, 384, 380);
    ofDrawLine(442, 350, 442, 380);
    ofDrawLine(500, 350, 500, 380);
    ofDrawLine(558, 350, 558, 380);
    ofDrawLine(616, 350, 616, 380);
    ofDrawLine(674, 350, 674, 380);
    ofDrawLine(732, 350, 732, 380);
    ofDrawLine(790, 350, 790, 380);
    
    
    ofSetLineWidth(strokeSize2);
    
    ofDrawLine(239, 350, 239, 365);
    ofDrawLine(297, 350, 297, 365);
    ofDrawLine(355, 350, 355, 365);
    ofDrawLine(413, 350, 413, 365);
    ofDrawLine(471, 350, 471, 365);
    ofDrawLine(529, 350, 529, 365);
    ofDrawLine(587, 350, 587, 365);
    ofDrawLine(645, 350, 645, 365);
    ofDrawLine(703, 350, 703, 365);
    ofDrawLine(761, 350, 761, 365);
    
    
    gui.draw();

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
