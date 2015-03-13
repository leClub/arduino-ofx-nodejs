#ifndef SUSHI_H
#define SUSHI_H

#include "ofMain.h"

#define TIMESPEED 500.0
#define NOISEN 200.0
#define AMPLI 350
#define MARGE_X 300
#define MARGE_Y 5000
#define SPEED 0.0005

class Sushi
{
    public:
        void init();
        void initSushi(int i);
        void draw();
        void update();
        int id;
        int x;
        float y;
        ofImage img;

        float pct;
        ofPoint a;
        ofPoint b;
        ofPoint c;
        ofPoint d;

        ofVec2f point;

    protected:
    private:
};

#endif // SUSHI_H
