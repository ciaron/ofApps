#ifndef ball_h
#define ball_h

#include "ofMain.h"

class Ball {
public:
        // Constructor
        Ball();

        // Methods
        void moveTo();
        void draw();

        // Properties
        int x;
        int y;
        ofColor color;
};
#endif
