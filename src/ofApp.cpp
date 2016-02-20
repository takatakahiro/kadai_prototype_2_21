#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
    
    BackgroundImage.loadImage("sea1.jpg");
    mySound.loadSound("bgm_maoudamashii_healing01.mp3");
    mySound.setLoop(true);
    mySound.play();
    
    
    ofSetVerticalSync(true);
    ofBackgroundHex(0xffffff);
    ofSetLogLevel(OF_LOG_NOTICE);
    ofDisableAntiAliasing();
    ofEnableAlphaBlending();
    
    
    box2d.init();
    box2d.setFPS(60.0);
    box2d.registerGrabbing();
    
    
    anchor[0].setup(box2d.getWorld(), ofGetWidth()/6, ofGetHeight()/6, 4);
    anchor[1].setup(box2d.getWorld(), ofGetWidth()/6*2, ofGetHeight()/6*2, 4);
    anchor[2].setup(box2d.getWorld(), ofGetWidth()/6*3, ofGetHeight()/6*3, 4);
    anchor[3].setup(box2d.getWorld(), ofGetWidth()/6*4, ofGetHeight()/6*4, 4);
    anchor[4].setup(box2d.getWorld(), ofGetWidth()/6*5, ofGetHeight()/6*5, 4);
    anchor[5].setup(box2d.getWorld(), ofGetWidth()/4*3, ofGetHeight()/4, 4);
    anchor[6].setup(box2d.getWorld(), ofGetWidth()/4, ofGetHeight()/4*3, 4);
    
    
    
    
    for (int i=0; i<3; i++) {
        
        shared_ptr<ofxBox2dCircle> circle0 = shared_ptr<ofxBox2dCircle>(new ofxBox2dCircle);
        circle0.get()->setPhysics(3.0, 0.53, 0.1);
        circle0.get()->setup(box2d.getWorld(), ofGetWidth()/2, 100+(i*20), 20);
        circles0.push_back(circle0);
        
        shared_ptr<ofxBox2dCircle> circle1 = shared_ptr<ofxBox2dCircle>(new ofxBox2dCircle);
        circle1.get()->setPhysics(3.0, 0.53, 0.1);
        circle1.get()->setup(box2d.getWorld(), ofGetWidth()/2, 100+(i*20), 20);
        circles1.push_back(circle1);
        
        shared_ptr<ofxBox2dCircle> circle2 = shared_ptr<ofxBox2dCircle>(new ofxBox2dCircle);
        circle2.get()->setPhysics(3.0, 0.53, 0.1);
        circle2.get()->setup(box2d.getWorld(), ofGetWidth()/2, 100+(i*20), 20);
        circles2.push_back(circle2);
        
        shared_ptr<ofxBox2dCircle> circle3 = shared_ptr<ofxBox2dCircle>(new ofxBox2dCircle);
        circle3.get()->setPhysics(3.0, 0.53, 0.1);
        circle3.get()->setup(box2d.getWorld(), ofGetWidth()/2, 100+(i*20), 20);
        circles3.push_back(circle3);
        
        shared_ptr<ofxBox2dCircle> circle4 = shared_ptr<ofxBox2dCircle>(new ofxBox2dCircle);
        circle4.get()->setPhysics(3.0, 0.53, 0.1);
        circle4.get()->setup(box2d.getWorld(), ofGetWidth()/2, 100+(i*20), 20);
        circles4.push_back(circle4);
        
        shared_ptr<ofxBox2dCircle> circle5 = shared_ptr<ofxBox2dCircle>(new ofxBox2dCircle);
        circle5.get()->setPhysics(3.0, 0.53, 0.1);
        circle5.get()->setup(box2d.getWorld(), ofGetWidth()/2, 100+(i*20), 20);
        circles5.push_back(circle5);
        
        shared_ptr<ofxBox2dCircle> circle6 = shared_ptr<ofxBox2dCircle>(new ofxBox2dCircle);
        circle6.get()->setPhysics(3.0, 0.53, 0.1);
        circle6.get()->setup(box2d.getWorld(), ofGetWidth()/2, 100+(i*20), 20);
        circles6.push_back(circle6);
        
        
    }
    
    
    
    for (int i=0; i<circles0.size(); i++) {
        shared_ptr<ofxBox2dJoint> joint = shared_ptr<ofxBox2dJoint>(new ofxBox2dJoint);
        
        if(i == 0) {
            joint.get()->setup(box2d.getWorld(), anchor[0].body, circles0[i].get()->body);
        }
        else {
            joint.get()->setup(box2d.getWorld(), circles0[i-1].get()->body, circles0[i].get()->body);
        }
        
        joint.get()->setLength(25);
        joints0.push_back(joint);
    }
    
    for (int i=0; i<circles1.size(); i++) {
        shared_ptr<ofxBox2dJoint> joint = shared_ptr<ofxBox2dJoint>(new ofxBox2dJoint);
        
        if(i == 0) {
            joint.get()->setup(box2d.getWorld(), anchor[1].body, circles1[i].get()->body);
        }
        else {
            joint.get()->setup(box2d.getWorld(), circles1[i-1].get()->body, circles1[i].get()->body);
        }
        
        joint.get()->setLength(25);
        joints1.push_back(joint);
    }
    
    for (int i=0; i<circles2.size(); i++) {
        shared_ptr<ofxBox2dJoint> joint = shared_ptr<ofxBox2dJoint>(new ofxBox2dJoint);
        
        if(i == 0) {
            joint.get()->setup(box2d.getWorld(), anchor[2].body, circles2[i].get()->body);
        }
        else {
            joint.get()->setup(box2d.getWorld(), circles2[i-1].get()->body, circles2[i].get()->body);
        }
        
        joint.get()->setLength(25);
        joints2.push_back(joint);
    }
    
    for (int i=0; i<circles3.size(); i++) {
        shared_ptr<ofxBox2dJoint> joint = shared_ptr<ofxBox2dJoint>(new ofxBox2dJoint);
        
        if(i == 0) {
            joint.get()->setup(box2d.getWorld(), anchor[3].body, circles3[i].get()->body);
        }
        else {
            joint.get()->setup(box2d.getWorld(), circles3[i-1].get()->body, circles3[i].get()->body);
        }
        
        joint.get()->setLength(25);
        joints3.push_back(joint);
    }
    
    for (int i=0; i<circles4.size(); i++) {
        shared_ptr<ofxBox2dJoint> joint = shared_ptr<ofxBox2dJoint>(new ofxBox2dJoint);
        
        if(i == 0) {
            joint.get()->setup(box2d.getWorld(), anchor[4].body, circles4[i].get()->body);
        }
        else {
            joint.get()->setup(box2d.getWorld(), circles4[i-1].get()->body, circles4[i].get()->body);
        }
        
        joint.get()->setLength(25);
        joints4.push_back(joint);
    }
    
    for (int i=0; i<circles5.size(); i++) {
        shared_ptr<ofxBox2dJoint> joint = shared_ptr<ofxBox2dJoint>(new ofxBox2dJoint);
        
        if(i == 0) {
            joint.get()->setup(box2d.getWorld(), anchor[5].body, circles5[i].get()->body);
        }
        else {
            joint.get()->setup(box2d.getWorld(), circles5[i-1].get()->body, circles5[i].get()->body);
        }
        
        joint.get()->setLength(25);
        joints5.push_back(joint);
    }
    
    
    for (int i=0; i<circles6.size(); i++) {
        shared_ptr<ofxBox2dJoint> joint = shared_ptr<ofxBox2dJoint>(new ofxBox2dJoint);
        
        if(i == 0) {
            joint.get()->setup(box2d.getWorld(), anchor[6].body, circles6[i].get()->body);
        }
        else {
            joint.get()->setup(box2d.getWorld(), circles6[i-1].get()->body, circles6[i].get()->body);
        }
        
        joint.get()->setLength(25);
        joints6.push_back(joint);
    }
    
    
}

//--------------------------------------------------------------
void ofApp::update() {
    box2d.update();
}


//--------------------------------------------------------------
void ofApp::draw() {
    
    ofBackground(0, 0, 0);
    ofSetColor(255,255,255);
    BackgroundImage.draw(0,0,ofGetWidth(),ofGetHeight());
    
    box2d.setGravity(gravity_x, gravity_y);
    
    
    //玉の描画
    for(int i=0; i<circles.size(); i++) {
        ofFill();
        ofSetHexColor(0x90d4e3);
        circles[i].get()->draw();
    }
    
    
    //障害物の支点の描画
    ofSetHexColor(0xf2ab01);
    for(int j = 0; j < 7; j++){
        anchor[j].draw();
    }
    
    
    //バネの描画
    for(int i=0; i<joints0.size(); i++) {
        ofSetHexColor(0);
        joints0[i].get()->draw();
    }
    for(int i=0; i<joints1.size(); i++) {
        ofSetHexColor(0);
        joints1[i].get()->draw();
    }
    for(int i=0; i<joints2.size(); i++) {
        ofSetHexColor(0);
        joints2[i].get()->draw();
    }
    for(int i=0; i<joints3.size(); i++) {
        ofSetHexColor(0);
        joints3[i].get()->draw();
    }
    for(int i=0; i<joints4.size(); i++) {
        ofSetHexColor(0);
        joints4[i].get()->draw();
    }
    for(int i=0; i<joints5.size(); i++) {
        ofSetHexColor(0);
        joints5[i].get()->draw();
    }
    for(int i=0; i<joints6.size(); i++) {
        ofSetHexColor(0);
        joints6[i].get()->draw();
    }
    
    
    
    //障害物の円の描画
    for(int i=0; i<circles0.size(); i++) {
        ofFill();
        ofSetColor(ofRandom(255), ofRandom(255), ofRandom(255));
        circles0[i].get()->draw();
    }
    for(int i=0; i<circles1.size(); i++) {
        ofFill();
        ofSetColor(ofRandom(255), ofRandom(255), ofRandom(255));
        circles1[i].get()->draw();
    }
    
    for(int i=0; i<circles2.size(); i++) {
        ofFill();
        ofSetColor(ofRandom(255), ofRandom(255), ofRandom(255));
        circles2[i].get()->draw();
    }
    for(int i=0; i<circles3.size(); i++) {
        ofFill();
        ofSetColor(ofRandom(255), ofRandom(255), ofRandom(255));
        circles3[i].get()->draw();
    }
    for(int i=0; i<circles4.size(); i++) {
        ofFill();
        ofSetColor(ofRandom(255), ofRandom(255), ofRandom(255));
        circles4[i].get()->draw();
    }
    for(int i=0; i<circles5.size(); i++) {
        ofFill();
        ofSetColor(ofRandom(255), ofRandom(255), ofRandom(255));
        circles5[i].get()->draw();
    }
    for(int i=0; i<circles6.size(); i++) {
        ofFill();
        ofSetColor(ofRandom(255), ofRandom(255), ofRandom(255));
        circles6[i].get()->draw();
    }
    
    
    
    //標的の描画
    ofSetColor(255, 255, 0);
    
    ofRect(ofGetWidth()-box_size, 0, box_size, box_size);
    ofRect(ofGetWidth()-box_size, ofGetHeight()-box_size, box_size, box_size);
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
    
    //右矢印キーでX方向の重力アップ
    if(key == OF_KEY_RIGHT){
        gravity_x += 10;
    }
    //下矢印キーでY方向の重力ダウン
    if(key == OF_KEY_DOWN){
        gravity_y += 10;
    }
    //下矢印キーでX方向の重力ダウン
    if(key == OF_KEY_LEFT){
        gravity_x -= 10;
    }
    //下矢印キーでY方向の重力アップ
    if(key == OF_KEY_UP){
        gravity_y -= 10;
    }
    //シフトキーで無重力状態
    if(key == ' '){
        gravity_x = 0;
        gravity_y = 0;
    }
    
    //’c’で玉の追加
    if(key == 'c') {
        float r = ofRandom(8, 20);
        circles.push_back(shared_ptr<ofxBox2dCircle>(new ofxBox2dCircle));
        circles.back().get()->setPhysics(3.0, 0.53, 0.1);
        circles.back().get()->setup(box2d.getWorld(), 20, ofGetHeight()/2, r);
        
    }
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {
    
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ) {
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {
}

//--------------------------------------------------------------
void ofApp::resized(int w, int h){
}


