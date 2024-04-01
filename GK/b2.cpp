// Câu 2:
// Given a class of car as follows:
// Class Car[string ID; string *BrandName; double Price];
// Write a program to manage the class including the following tasks:
// Define class
// 2 Constructor
// Destructor
// Main function
#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string ID;
    string *BrandName;
    double Price;

public:
    // Constructors
    Car() : ID(""), BrandName(nullptr), Price(0.0) {}
    Car(string id, string brand, double price) : ID(id), Price(price) {
        BrandName = new string;
        *BrandName = brand;
    }

    // Destructor
    ~Car() {
        if (BrandName != nullptr) {
            delete BrandName;
        }
    }

    // Getter methods
    string getID() const { return ID; }
    string getBrandName() const { return *BrandName; }
    double getPrice() const { return Price; }

    // Setter methods
    void setID(string id) { ID = id; }
    void setBrandName(string brand) { *BrandName = brand; }
    void setPrice(double price) { Price = price; }

    // Display method
    void display() const {
        cout << "Car ID: " << ID << endl;
        cout << "Brand Name: " << *BrandName << endl;
        cout << "Price: $" << Price << endl;
    }
};

int main() {
    cout << "hello";
    // Creating Car objects
    Car *car1= new Car("001", "Toyota", 25000.0);
    Car car2;

    // Setting attributes for car2
    // car2.setID("002");
    // car2.setBrandName("Honda");
    // car2.setPrice(30000.0);

    // Displaying car details
    cout << "Car 1 details:" << endl;
    car1->display();
    cout << endl;

    // cout << "Car 2 details:" << endl;
    // car2.display();

    return 0;
}
