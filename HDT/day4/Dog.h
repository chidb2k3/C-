#ifndef DOG_H
#define DOG_H
#include <iostream>
#include "Pet.h"
using namespace std;
class Dog: public Pet
{
private:
    /* data */
public:
    Dog(string _name, float _weight, string _color, int _age): 
    Pet(_name,_weight,_color,_age){}
    void gau(){
        cout << "Gau gau !!" << endl;
    }
    bool eat(string food) override {
        if (food.compare("xuong"))
        {
            this->setWeight(0.8);
            return true;
        }
        return false;
        
    }
};
#endif
