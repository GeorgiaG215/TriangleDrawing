#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    //boxX = 100;
    //boxY = 100;
    //boxWidth = 300;
    //boxHeight = 300;

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(255);
    
    ofNoFill();
    ofSetColor(0,0,0,100);
    
    ofRect(boxX, boxY, boxWidth, boxHeight);
    



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

    boxWidth = x;
    boxHeight = y;

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

    boxX = x;
    boxY = y;
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
