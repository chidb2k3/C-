#ifndef CAR_H
#define CAR_H
#include <iostream>
using namespace std;
class Car
{
private:
    int yearModel;
    string make;
    int speed;
public:
    Car();
    Car(int yearModel, string make);
    Car(int yearModel, string make, int speed);
    int getYear();
    void setYear(int yearModel);
    string getMake();
    void setMake(string make);
    int getSpeed();
    void setSpeed(int speed);
    void accelerate();
    void brake();


};



#endif