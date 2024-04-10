#ifndef HINHHOC_H
#define HINHHOC_H

#include <iostream>
using namespace std;
class HinhHoc
{
private:
    string mauSac;
public:
    HinhHoc(/* args */){

    }
    HinhHoc(string _mauSac){
        mauSac = _mauSac;
    }
    string getMauSac(){
        return mauSac;
    }
    void setMauSac(string _mauSac){
        mauSac = _mauSac;
    }
    void toString(){
        cout << mauSac;
    }
    virtual float dienTich(float, float) = 0;
    

};
#endif

