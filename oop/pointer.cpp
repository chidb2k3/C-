#include <iostream>
using namespace std;
void t( int &n){
    n++;
}
void t2(int *n){
    (*n)++;
}
void swap(int *a, int *b){
    int t = (*a);
    (*a) = (*b);
    (*b) = t;
}
void swap2(int &a, int &b){
    int t = a;
    a=b;
    b=t;
}
struct SinhVien
{
    string name;
    int age;

};

int main(){
    SinhVien sv;
    sv.name = "Chi";
    sv.age = 21;
    SinhVien *p = &sv;
    // cout << "Name " << (*p).name;
    // cout << "\nAge " << (*p).age;
    cout << "Name " << p->name;
    cout << "\nAge " << p->age;
   













    // int a = 100, b= 200;
    // // swap(&a,&b);
    // swap2(a,b);
    // cout <<"a="<< a;
    // cout <<"b="<< b;
    // int n = 5;
    // cout << n << endl;
    // int *p;
    // p=&n;
    // t2(p);
    // cout << "n sau khi tang " << n;





    // float x = 444.555f;
    // cout << "address x: " << &x << " Value x: " << x << endl;

    // float *p; 
    // p=&x;
    // cout << &p;
    // cout << endl << p;
    // cout << endl << *p;
    // *p = 5.5;
    // cout << "\nP=" << *p;
    // float **q;
    // q=&p;
    // cout << endl<< q; //04
    // cout << endl << *q;
    // float **q;
    // q = &p;
    // cout << endl << "q : " << q;
    return 0;
    
    


}