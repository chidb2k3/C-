#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main(){
    vector<string> dssv;
    dssv.push_back("Chi");

    cout << dssv[0];
    dssv.pop_back();
    cout << dssv[0];

}