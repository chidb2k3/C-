#ifndef RETANGLE_H
#define RETANGLE_H
#include <iostream>
#include <iomanip>
using namespace std;
class Retangle
{
    private:
    float width;
    float height;
    string color;
    public:
    Retangle();
    Retangle(float width, float height, string color);
    float getWidth();
    void setWidth(float width);
    float getHeight();
    void setHeight(float height);
    string getColor();
    void setColor(string color);
    float getArea();
    float getPerimeter();
    void displayRetangle();
    
    

};
#endif