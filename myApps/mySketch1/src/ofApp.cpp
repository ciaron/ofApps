#include "ofApp.h"
int myCircleX;
int myCircleY;
int myCircleRadius=100;

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(30);
    myCircleX=300;
    myCircleY=200;
    ofEnableSmoothing();
}

//--------------------------------------------------------------
void ofApp::update(){
    /*myCircleX+=4;
    if (myCircleX > 1024)
    {
        myCircleX = 300;
    }*/
    theBall.x += ( mouseX - theBall.x ) * 0.1;
    theBall.y += ( mouseY - theBall.y ) * 0.1;
}

//--------------------------------------------------------------
void ofApp::draw(){

    /*ofSetColor(255, 0, 255);
    ofCircle(myCircleX, myCircleY, myCircleRadius);
    ofDrawBitmapString(ofToString(ofGetFrameRate())+"fps", 10, 15);*/
    //ofBackground(0);
    //ofSetColor(0,0,255);
    //ofFill();
    //ofCircle(ofGetWindowWidth()*0.5, ofGetWindowHeight()*0.5, 30);
    //ofCircle( mouseX, mouseY, 30);
    ofBackgroundGradient(ofColor::gray, ofColor(30,10,30), OF_GRADIENT_CIRCULAR);
    theBall.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    /*if (key == 119) // 'w'
    {
        myCircleY--;
    }
    if (key == 97) //'a'
    {
        myCircleX--;
    }
    if (key == 's') {
        myCircleX++;
    }
    if (key == 'd') {
        myCircleY++;
    }*/

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    //cout << "mouseMoved: " << x << ", " << y << endl;
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    //cout << "mouseDragged: " << x << ", " << y << " button: " << button << endl;

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    //cout << "mousePressed: " << x << ", " << y << " button: " << button << endl;
    //myCircleRadius++;
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    //cout << "mouseReleased: " << x << ", " << y << " button: " << button << endl;

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
