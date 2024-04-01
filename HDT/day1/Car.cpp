#include "Car.h"
Car::Car(){
    this->yearModel= 0;
    this->make = "";
    this->speed = 0;
}
Car::Car(int yearModel, string make){
    this->yearModel = yearModel;
    this->make = make;
    this->speed = 0;
}
Car::Car(int yearModel, string make, int speed){
    this->yearModel = yearModel;
    this->make = make;
    this->speed = speed;
}
int Car::getYear(){
    return this->yearModel;
}
void Car::setYear(int yearModel){
    this->yearModel = yearModel;
}
string Car::getMake(){
    return this->make;
}
void Car::setMake(string make){
    this->make = make;
}
int Car::getSpeed(){
    return this->speed;
}
void Car::setSpeed(int speed){
    this->speed = speed;
}
void Car::accelerate(){
    this->speed+=5;
}
void Car::brake(){
    this->speed-=5;
}