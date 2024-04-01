#include "SinhVien.cpp"
using namespace std;
int main(){
    SinhVien sv1("Chi", 1,5);
    sv1.thongTin();
    cout << "\n";
    SinhVien sv2(sv1);
    sv2.thongTin();
    SinhVien sv3("quyet",1,5);
    if (sv1.operator==(sv3))
    {
        cout << "Giong nhau";
    }else{
        cout << "Khacnhau";
    }
    

}