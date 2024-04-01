#include "Pet.h"
#include "Dog.h"
#include "Function.h"
#include <iostream>
using namespace std;
int main()
{
    Dog *p = new Dog("Bo", 5.3, "Red", 10);
    p->showMe();
    Function f;
    vector<Pet *> pets = f.createPets();
    for (int i = 0; i < pets.size(); i++)
    {
        pets[i]->showMe();
    }

    return 0;
}
