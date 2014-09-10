#include "ofApp.h"
int myCircleX;
int myCircleY;

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    myCircleX=300;
    myCircleY=200;
}

//--------------------------------------------------------------
void ofApp::update(){
    myCircleX+=4;
    if (myCircleX > 1024)
    {
        myCircleX = 300;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofSetColor(255, 0, 255);
    ofCircle(myCircleX, myCircleY, 60);
    ofDrawBitmapString(ofToString(ofGetFrameRate())+"fps", 10, 15);
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
