#ifndef CAT_H
#define CAT_H
#include <iostream>
#include "Pet.h"
using namespace std;
class Cat: public Pet
{
private:
    /* data */
public:
    Cat(string name, float weight, string color, int age): Pet(name,weight,color,age){}
    void meo(){
        cout << "meo meo !!" << endl;
    }
    bool eat(string food){
        if (food.compare('ca'))
        {
            this->setWeight(0.3);
            return true;
        }
        return false;
        
    }
};
#endif
