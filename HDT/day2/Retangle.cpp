#include "Retangle.h"
using namespace std;
Retangle::Retangle()
{
    this->width = 0.0;
    this->height = 0.0;
    this->color = "red";
}
Retangle::Retangle(float width, float height, string color)
{
    if (width > 0.0 && height > 0.0)
    {
        this->width = width;
        this->height = height;
        this->color = color;
    }else{
        cout << "Gia tri width va height > 0" << endl;
    }

    
}
float Retangle::getWidth()
{
    return this->width;
}
void Retangle::setWidth(float width)
{
    this->width = width;
}
float Retangle::getHeight()
{
    return this->height;
}
void Retangle::setHeight(float height)
{
    this->height = height;
}
string Retangle::getColor()
{
    return this->color;
}
void Retangle::setColor(string color)
{
    this->color = color;
}
float Retangle::getArea()
{
    return this->width * this->height;
}
float Retangle::getPerimeter()
{
    return 2 * (this->width + this->height);
}
void Retangle::displayRetangle()
{
    cout << "Dien tich: " << this->getArea() << endl;
    cout << "Chu vi: " << this->getPerimeter() << endl;
}
