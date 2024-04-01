#ifndef CHICKEN_H
#define CHICKEN_H
#include <iostream>
#include "Pet.h"
using namespace std;
class Chicken: public Pet
{
private:
    /* data */
public:
    Chicken(string name, float weight, string color, int age): Pet(name,weight,color,\age){}
    void gay(){
        cout << "ò ó o.. !!" << endl;
    }
    bool eat(string food){
        if (food.compare('thoc'))
        {
            this->setWeight(0.2);
            return true;
        }
        return false;
        
    }
};
#endif
