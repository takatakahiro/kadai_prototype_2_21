#pragma once
#include "ofMain.h"
#include "ofxBox2d.h"


// -------------------------------------------------

class ofApp : public ofBaseApp {
    
public:
    
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y);
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void resized(int w, int h);
    
    ofxBox2d box2d;			  //	the box2d world
    ofxBox2dCircle anchor[7];			  //	fixed anchor
    
    
    vector <shared_ptr<ofxBox2dCircle> > circles;
    
    
    vector  <shared_ptr<ofxBox2dCircle> >  circles0;		  //	default box2d circles
    vector  <shared_ptr<ofxBox2dCircle> >  circles1;
    vector  <shared_ptr<ofxBox2dCircle> >  circles2;
    vector  <shared_ptr<ofxBox2dCircle> >  circles3;
    vector  <shared_ptr<ofxBox2dCircle> >  circles4;
    vector  <shared_ptr<ofxBox2dCircle> >  circles5;
    vector  <shared_ptr<ofxBox2dCircle> >  circles6;
    
    
    vector	<shared_ptr<ofxBox2dJoint> >  joints0;      //	joints
    vector	<shared_ptr<ofxBox2dJoint> >  joints1;
    vector	<shared_ptr<ofxBox2dJoint> >  joints2;
    vector	<shared_ptr<ofxBox2dJoint> >  joints3;
    vector	<shared_ptr<ofxBox2dJoint> >  joints4;
    vector	<shared_ptr<ofxBox2dJoint> >  joints5;
    vector	<shared_ptr<ofxBox2dJoint> >  joints6;
    
    float gravity_x;
    float gravity_y;
    
    int box_size = 40;
    
    ofImage BackgroundImage;
    ofSoundPlayer mySound;
};

