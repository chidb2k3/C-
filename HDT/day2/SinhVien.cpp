#include "SinhVien.h"
using namespace std;
SinhVien::SinhVien()
{
    name = "";
    soTinChi = nullptr;
    diemTB = 0;
}
SinhVien::SinhVien(string _name, int _soTinChi, float _diemTB)
{
    name = _name;
    diemTB = _diemTB;
    soTinChi = new int;
    *soTinChi = _soTinChi;
}
SinhVien::SinhVien( SinhVien &sv)
{
    name = sv.name;
    diemTB = sv.diemTB;
    soTinChi = new int;
    *soTinChi = *sv.soTinChi;
}
void SinhVien::thongTin()
{
    cout << "Name : " << name;
    cout << "\nSoTinChi : " << *soTinChi;
    cout << "\nDiemTB : " << diemTB;
}
bool SinhVien::operator==(SinhVien &sv){
    if(name == sv.name && diemTB == sv.diemTB ){
        return true;
    }else{
        return false;
    }
}