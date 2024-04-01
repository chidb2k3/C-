#include <iostream>
#include <string>
#include <math.h>
using namespace std;
void ass1(){
    int distance, speed, time;
    cout << "What is the speed if the vehicle in mph? ";
    cin >> speed;
    cout << endl << "How many hours has it traveled? ";
    cin >> time;
    for (int i = 1; i <= time; i++)
    {
        distance = speed*i;
        cout << endl << i << " Hour Distance Traveled: " << distance;
   
    }
}
void quadraticEquation(float a,float b, float c){
   float v = b*b - 4*a*c;
   if (v<0)
   {
    cout << "Phuong trinh vo nghiem" << endl;
   }else if (v==0)
   {
    cout << "Phuong trinh co nghiem kep: x=" << -b/(2*a) << endl;
      
   }else{
    float x1 = (-b+sqrt(v))/(2*a);
    float x2 = (-b-sqrt(v))/(2*a);
    cout << "Nghiem thu nhat " << x1 << endl;
    cout << "Nghiem thu hai " << x2 << endl;
   }
   
   
    

}

double calculateMedian(int *arr, int n) {
    if (n % 2 == 1) {
        // If the number of elements is odd, return the middle value
        return *(arr + n / 2);
    } else {
        // If the number of elements is even, return the average of the two middle values
        double middle1 = *(arr + (n - 1) / 2);
        double middle2 = *(arr + (n - 1) / 2 + 1);
        return (middle1 + middle2) / 2.0;
    }
}





int main(){
    //BT1
    // string name;
    // cout << "Enter your name: "; cin >> name;
    // cout << "Hello " << name << endl;
    // ass1();

    //BT2
    // float a,b,c;
    // cout << "ax^2+bx+c=0 (a!=0)";
    // do
    // {
    //     cout << endl << "Nhap a "; cin >> a; 
    // } while (a==0);
    // cout << endl << "Nhap b "; cin >> b;
    // cout << endl << "Nhap c "; cin >> c;
    // quadraticEquation(a,b,c);

    //BT3
     // Example usage
    int arr[] = {1, 2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    double median = calculateMedian(arr, n);

    cout << "Median " << median;

    //BT4






    return 0;

}