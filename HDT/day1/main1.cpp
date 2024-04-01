#include <iostream>
#include "Car.h"
using namespace std;

int main(){
    const int MAX = 3;
    Car arr[MAX] = {Car(001,"Xe001"),
                    Car(002,"Xe002"),
                    Car(003,"Xe003")};
    for (int i = 0; i<MAX; i++)
    {
         cout << arr[i].getYear() << "--" << arr[i].getMake() << "--" << arr[i].getSpeed()<< endl;
        

    }
    
    Car xe1(2000, "A");
    cout << xe1.getYear() << "--" << xe1.getMake() << "--" << xe1.getSpeed()<< endl;
    for (int i = 1; i <= 5; i++)
    {
        xe1.accelerate();
        cout << "Accelerate " << i << "    " << "Speed = " << xe1.getSpeed() << endl;
    }
    cout << endl;
    for (int i = 1; i <= 5; i++)
    {
        xe1.brake();
        cout << "Brake " << i << "    " << "Speed = " << xe1.getSpeed() << endl;
    }
    return 0;
    
}