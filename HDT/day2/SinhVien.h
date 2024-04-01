#ifndef SINHVIEN_H
#define SINHVIEN_H

#include <iostream>
using namespace std;
class SinhVien
{
private:
    string name;
    int *soTinChi;
    float diemTB;

public:
    SinhVien();
    SinhVien(string _name, int soTinChi, float diemTB);
    SinhVien( SinhVien &sv);
    void thongTin();
    bool operator== (SinhVien &sv);
};

#endif

