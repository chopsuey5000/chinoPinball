//
//  MissionInfoDisplay.h
//  chinoPinball
//
//  Created by Bimba on 29/06/14.
//
//

#pragma once

#include "SimpleMission.h"
#include "eventMission.h"
#include "ofxFTGL.h"
#include "MediaUtils.h"

class MissionInfoDisplay{
public:
    MissionInfoDisplay(void);
    void draw(void);
    
    void listenerOnUpdateMission(eventMission & args);
    
private:
    SimpleMission *currentMission;
    SimpleMission::enMissionStates currentMissionState;
    ofxFTGLFont font;
    string str;
    ofLight light;
    ofMaterial material;
    int startPositionX, startPositionY;
    ofEasyCam cam;
    
    
    void drawElapsedMissionTime(void);
};