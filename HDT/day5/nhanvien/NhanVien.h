#ifndef NHANVIEN_H
#define NHANVIEN_H
#include <iostream>
using namespace std;
class NhanVien
{
private:
    string tenNhanVien;
    float luongNhanVien;
    float phuCap;
    int *thamNienCongTac;
public:
    NhanVien(/* args */);
    NhanVien(string _tenNhanVien, float _luongNhanVien, float _phuCap, int _thamNienCongTac);
    NhanVien(NhanVien &nv);
    string getTenNhanVien();
    void setTenNhanVien(string _tenNhanVien);
    float getLuongNhanVien();
    void setLuongNhanVien(float _luongNhanVien);
    float getPhuCap();
    void setPhuCap(float _phuCap);
    int getThamNienCongTac();
    void setThamNienCongTac(int _thamNienCongTac);
    void toString();

   
};
#endif






