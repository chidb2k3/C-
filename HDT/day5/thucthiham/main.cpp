#include <iostream>
#include <stdexcept>
using namespace std;
template <class val>
// Sử dụng function template để tính tổng ba số
val sum(val a, val b, val c)
{
    return a + b + c;
}
// Hàm tính tổng từ 1 đến n bằng đệ quy
int tongTuMotDenN(int n) {
    if (n < 0) {
        throw std::invalid_argument("n phai khong am");
    }

    if (n == 0) {
        return 0;
    } else {
        return n + tongTuMotDenN(n - 1);
    }
}
int main()
{
    cout << "2+5+9=" << sum(2, 5, 9) << endl;
    cout << "3.5+2.3+4.5= " << sum(3.5, 2.3, 4.5) << endl;
    try {
        int n;
        std::cout << "Nhap vao so n: ";
        std::cin >> n;

        int tong = tongTuMotDenN(n);
        std::cout << "Tong tu 1 den " << n << " la: " << tong << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Loi: " << e.what() << std::endl;
    }
    return 0;
}