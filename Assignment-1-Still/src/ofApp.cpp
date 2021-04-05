#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    
    gui.setup();
    
    gui.add(slider1.setup("Stars",2,0,4));
    gui.add(slider2.setup("Asteroids",5,0,10));


}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetBackgroundColor(0, 0, 0);
    
    float location1= ofRandom(0, ofGetWidth());
    float len1 = ofRandom(0, ofGetHeight());
    
    float location2= ofRandom(0, ofGetWidth());
    float len2 = ofRandom(0, ofGetHeight());

        
    ofSetLineWidth(ofRandom(0, 3));
    ofSetColor(255,255,255);
    ofDrawCircle(location1, len1, slider1);
          
    
    ofSetColor(ofRandom(0,255), ofRandom(0,255), ofRandom(0,255));
    ofDrawCircle(location2,len2,slider2);
    
    

    
    ofNoFill();
    ofSetColor(255,255,255);
    ofSetLineWidth(0.5);
    
    ofDrawCircle(0,0,300);
    ofDrawCircle(0,0,353);
    ofDrawCircle(0,0,407);
    ofDrawCircle(0,0,455);
    ofDrawCircle(0,0,600);
    ofDrawCircle(0,0,750);
    ofDrawCircle(0,0,870);
    ofDrawCircle(0,0,950);

    
    
    ofFill();
    
    //Sun
    ofSetColor(184, 24, 0);
    ofDrawCircle(0,0,230);
    
    //Mercury
    ofSetColor(224, 157, 22);
    ofDrawCircle(210,210,3);
    
    //Venus
    ofSetColor(252, 173, 0);
    ofDrawCircle(180, 300, 5);
    
    //Earth
    ofSetColor(28, 126, 255);
    ofDrawCircle(350, 200, 7);
    
    //Mars
    ofSetColor(181, 46, 5);
    ofDrawCircle(430, 150, 6);
    
    //Jupiter
    ofSetColor(222, 166, 149);
    ofDrawCircle(370, 480, 70);
    
    //Saturn
    ofSetColor(201, 190, 171);
    ofDrawCircle(700, 260, 55);
    //SaturnRing
    ofSetColor(133, 121, 101);
    ofDrawEllipse(700,260,200,25);
    
    //Uranus
    ofSetColor(171, 217, 219);
    ofDrawCircle(690, 530, 30);
    
    //Neptune
    ofSetColor(80, 136, 204);
    ofDrawCircle(850, 400, 28);
    

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
