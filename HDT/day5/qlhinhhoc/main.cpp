#include <iostream>
#include <string>

// Lớp HinhHoc
class HinhHoc {
protected:
    std::string mauSac;

public:
    // Hàm dựng mặc định
    HinhHoc() : mauSac("") {}

    // Hàm dựng có tham số
    HinhHoc(std::string color) : mauSac(color) {}

    // Getter và setter
    std::string getMauSac() const {
        return mauSac;
    }

    void setMauSac(std::string color) {
        mauSac = color;
    }

    // Hàm tính diện tích ảo
    virtual float tinhDienTich() const = 0;
};

// Lớp HinhChuNhat kế thừa từ lớp HinhHoc
class HinhChuNhat : public HinhHoc {
private:
    float chieuDai;
    float chieuRong;

public:
    // Hàm dựng mặc định
    HinhChuNhat() : HinhHoc(), chieuDai(0), chieuRong(0) {}

    // Hàm dựng có tham số
    HinhChuNhat(std::string color, float dai, float rong) : HinhHoc(color), chieuDai(dai), chieuRong(rong) {}

    // Getter và setter
    float getChieuDai() const {
        return chieuDai;
    }

    void setChieuDai(float dai) {
        chieuDai = dai;
    }

    float getChieuRong() const {
        return chieuRong;
    }

    void setChieuRong(float rong) {
        chieuRong = rong;
    }

    // Hàm tính diện tích hình chữ nhật
    float tinhDienTich() const override {
        return chieuDai * chieuRong;
    }
};

int main() {
    // Tạo đối tượng hình chữ nhật
    HinhChuNhat hcn("Xanh", 5.0f, 3.0f);

    // In thông tin và diện tích hình chữ nhật
    std::cout << "Mau sac: " << hcn.getMauSac() << std::endl;
    std::cout << "Chieu dai: " << hcn.getChieuDai() << std::endl;
    std::cout << "Chieu rong: " << hcn.getChieuRong() << std::endl;
    std::cout << "Dien tich: " << hcn.tinhDienTich() << std::endl;

    return 0;
}
