#ifndef BIG_H
#define BIG_H
#include <iostream>
#include "Pet.h"
using namespace std;
class Big: public Pet
{
private:
    /* data */
public:
    Big(string name, float weight, string color, int age): Pet(name,weight,color,age){}
    void ec(){
        cout << "éc éc !!" << endl;
    }
    bool eat(string food){
        if (food.compare('rau'))
        {
            this->setWeight(1.0);
            return true;
        }
        return false;
        
    }
};
#endif
