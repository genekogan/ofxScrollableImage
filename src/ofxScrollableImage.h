#pragma once

#include "ofMain.h"


class ofxScrollableImage
{
public:
    ofxScrollableImage();
    
    void setup(string path, int width, int height);
    void loadImage(string path);
    void setSize(int width, int height);
    string getImagePath() {return path;}
    void setScale(float scale);
    void setPosition(float tx, float ty);
    void draw(int x, int y);
    
private:
    void update();
    
    ofFbo fbo;
    ofFbo maskFbo;
    ofShader shader;
    int width, height;
    float scale, tx, ty;
    string path;
    ofImage img;
};