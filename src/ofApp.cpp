#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    //boxX = 100;
    //boxY = 100;
    //boxWidth = 300;
    //boxHeight = 300;
    float nZigZagsY = boxHeight/i;

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(255);
    
    ofNoFill();
    ofSetColor(0x000000);
    
    ofRect(boxX, boxY, boxWidth, boxHeight);
    
    
    ofFill();
    ofSetColor(0x000000);
    
    ofSetPolyMode(OF_POLY_WINDING_ODD);	// this is the normal mode
    
      for(int i = 4; i < 25; i++){
    
    ofBeginShape();
    ofVertex(boxX,boxY);
    ofVertex(boxX+boxWidth,boxHeight+(nZigZagsY*(i+1)));
                 
                 //ofVertex(boxX+boxWidth,boxHeight+(nZigZagsY*3));
    ofVertex(boxX,boxHeight+(nZigZagsY*(i-1)));
                 
    ofVertex(boxX,boxY+boxHeight);
                 
    ofVertex(boxX,boxY);
    ofVertex(boxX+(boxWidth/4),boxY+boxHeight);
    ofVertex(boxX+(boxWidth/2),boxY);
    ofVertex((boxX+(boxWidth/4)*3),boxY+boxHeight);
    ofVertex(boxX+boxWidth,boxY);
    ofEndShape();

    
    }
    

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    for ( key == 'a';){
        i++;
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
