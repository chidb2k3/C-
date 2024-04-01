// Câu 1:
// Given information of a product as fllows:
// ProductID, ProductName, Quantity, Write a program to mange a list of n product using array. The program has the following functionaliries
// 2 Contructors
// Input/Output methods
// Public interfaces(setters/getters)
// Main function

#include <iostream>
#include <string>

using namespace std;

class Product {
private:
    int ProductID;
    string ProductName;
    int Quantity;

public:
    // Constructors
    Product() : ProductID(0), ProductName(""), Quantity(0) {}
    Product(int id, string name, int quantity) : ProductID(id), ProductName(name), Quantity(quantity) {}

    // Setter methods
    void setProductID(int id) { ProductID = id; }
    void setProductName(string name) { ProductName = name; }
    void setQuantity(int quantity) { Quantity = quantity; }

    // Getter methods
    int getProductID() const { return ProductID; }
    string getProductName() const { return ProductName; }
    int getQuantity() const { return Quantity; }

    // Input method
    void input() {
        cout << "Enter Product ID: ";
        cin >> ProductID;
        cout << "Enter Product Name: ";
        cin.ignore();
        getline(cin, ProductName);
        cout << "Enter Quantity: ";
        cin >> Quantity;
    }

    // Output method
    void output() const {
        cout << "Product ID: " << ProductID << endl;
        cout << "Product Name: " << ProductName << endl;
        cout << "Quantity: " << Quantity << endl;
    }
};

int main() {
    const int MAX_PRODUCTS = 100;
    Product productList[MAX_PRODUCTS];
    int numProducts;

    cout << "Enter the number of products: ";
    cin >> numProducts;

    // Input products
    for (int i = 0; i < numProducts; ++i) {
        cout << "Enter details for Product " << i + 1 << endl;
        productList[i].input();
    }

    // Output products
    cout << "\nProduct List:\n";
    for (int i = 0; i < numProducts; ++i) {
        cout << "\nProduct " << i + 1 << ":\n";
        productList[i].output();
    }

    return 0;
}
