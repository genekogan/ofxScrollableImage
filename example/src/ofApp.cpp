#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    img.setup("grid_flowers.jpg", 750, 500);
}

//--------------------------------------------------------------
void ofApp::update(){
    float tx = (float) ofGetMouseX() / ofGetWidth();
    float ty = (float) ofGetMouseY() / ofGetHeight();
    float scale = 2.0;
    
    img.setScale(scale);
    img.setPosition(tx, ty);
}

//--------------------------------------------------------------
void ofApp::draw(){
    img.draw(100, 100);
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
