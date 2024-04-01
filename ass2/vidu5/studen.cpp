#include <iostream>
#include <vector>
#include <string>

class Car {
public:
    std::string make;
    std::string model;
    int year;

    Car(std::string m, std::string mod, int y) : make(m), model(mod), year(y) {}

    void display() const {
        std::cout << "Brand: " << make << " " << model << ", Year: " << year << std::endl;
    }
};

int main() {
    // Tạo một vector chứa các đối tượng Car.
    std::vector<Car> garage;

    // Thêm các đối tượng Car vào trong vector.
    garage.emplace_back("Vietnix.vn", "VPS,Hosting", 2023);
    garage.emplace_back("Honda", "Accord", 2019);
    garage.emplace_back("Tesla", "Model S", 2021);
    garage.pop_back();

    // Hiển thị thông tin của từng chiếc xe trong garage.
    for (const Car& car : garage) {
        car.display();
    }

    return 0;
}