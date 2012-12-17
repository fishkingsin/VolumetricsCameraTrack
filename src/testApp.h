#pragma once

#include "ofMain.h"
#include "ofxTimeline.h"
#include "ofxGameCamera.h"
#include "ofxVolumetrics.h"
#include "ofxTLCameraTrack.h"
#include "ofxGui.h"

class testApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed  (int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    
    ofxVolumetrics myVolume;
    bool bVolumeSetup;
    unsigned char * volumeData;
    int volWidth, volHeight, volDepth;
    ofImage background;
    vector<ofxImageSequencePlayer >imageSequence;
    bool linearFilter;
    void initVolumetrics(ofxImageSequencePlayer &_imageSequence);
    
    //timeline
    ofxTimeline timeline;
    
    //camera
    ofxGameCamera cam;
    ofRectangle viewportGameCam;
    ofxTLCameraTrack cameraTrack;
	
    void populateTimelineElements();
	void saveSettings();
	
	
	
	//gui
	void resetCameraPosition();
    void alignCameraToTrack();
	ofxPanel gui;
    ofxButton shouldResetCamera;
    ofxFloatSlider cameraSpeed;
    ofxFloatSlider cameraRollSpeed;
    ofxButton shouldSaveCameraPoint;
    ofxToggle currentLockCamera;
    
    
	
};
