#ifndef PET_H
#define PET_H
#include <iostream>
using namespace std;
class Pet
{
private:
    int id;
    string name;
    float weight;
    string color;
    int age;


public:
    Pet(){};
    Pet(string _name,float _weight,string _color,int _age){
        this->name = _name;
        this->weight = _weight;
        this->color = _color;
        this->age = _age;
    }
    virtual bool eat(string) = 0;
    void showMe(){
        cout << "|Name: " << name << "|Weight: " << weight << "|Color: " << color << 
        "|Age: " << age << endl;
    }
    float getWeight(){
        return weight;
    }
    void setWeight(float w){
        this->weight += w;
    }
   
};
#endif