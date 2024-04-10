#include "NhanVien.h"
#include <iostream>
using namespace std;
NhanVien::NhanVien()
{
}
NhanVien::NhanVien(string _tenNhanVien, float _luongNhanVien, float _phuCap, int _thamNienCongTac)
{
    tenNhanVien = _tenNhanVien;
    luongNhanVien = _luongNhanVien;
    phuCap = _phuCap;
    thamNienCongTac = new int(_thamNienCongTac);
}
NhanVien::NhanVien(NhanVien &nv)
{
    tenNhanVien = nv.tenNhanVien;
    luongNhanVien = nv.luongNhanVien;
    phuCap = nv.phuCap;
    if (nv.thamNienCongTac != nullptr)
    {
        thamNienCongTac = new int(*nv.thamNienCongTac);
    }
    else
    {
        thamNienCongTac = nullptr;
    }
}
string NhanVien::getTenNhanVien(){
    return tenNhanVien;
}
void NhanVien::setTenNhanVien(string _tenNhanVien){
    tenNhanVien = _tenNhanVien;
}
float NhanVien::getLuongNhanVien(){
    return luongNhanVien;
}
void NhanVien::setLuongNhanVien(float _luongNhanVien){
    luongNhanVien = _luongNhanVien;
}
float NhanVien::getPhuCap(){
    return phuCap;
}
void NhanVien::setPhuCap(float _phuCap){
    phuCap = _phuCap;
}
int NhanVien::getThamNienCongTac(){
    return *thamNienCongTac;
}

void NhanVien::setThamNienCongTac(int _thamNienCongTac){
    *thamNienCongTac = _thamNienCongTac;
}
void NhanVien::toString(){
    cout << tenNhanVien << " | " << luongNhanVien << " | " << phuCap << " | " << thamNienCongTac << endl;
}
