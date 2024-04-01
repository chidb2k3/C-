#include "Function.h"
#include "Pet.h"
#include "Dog.h"
#include "Cat.h"
#include "Chicken.h"
#include "Big.h"
#include <vector>
#include <string>
#include <iostream>
Function::Function(){};
vector<Pet*> Function::createPets(){
    Dog* dog = new Dog("Cho",11,"KK",2);
    // Cat* cat = new Cat("Tom", 12, "Vang",4);
    vector<Pet*>  pets;
    pets.push_back(dog);
    // pets.push_back(cat);
    return pets;

}
    // void doFoodForPets(vector<Pet*>,vector<string>)
    // void makeSoundForPets(vector<Pet*>)
