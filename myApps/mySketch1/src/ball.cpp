#include "ball.h"

Ball::Ball(){
    // Set the initial color
    color.set( ofRandom(255), ofRandom(255), ofRandom(255));

    // Initial x position of the ball
    x = ofRandom( ofGetWindowWidth() );

    // Initial y position of the ball
    y = ofRandom( ofGetWindowHeight() );
}

void Ball::moveTo(){

}

void Ball::draw(){
    ofSetColor(color);
    ofFill();
    ofCircle( x, y, 30);
}
