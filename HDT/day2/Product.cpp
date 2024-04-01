#include "Product.h"

Product::Product() {
    name = "";
    price = nullptr;
    quantity = 0;
}

Product::Product(string _name, float _price, int _quantity) {
    this->name = _name;
    this->quantity = _quantity;
    price = new float;
    *price = _price;

}

void Product::setPrice(float _price) {
    *price = _price;
}

float Product::getPrice() {
    return *price;
}

void Product::displayProduct() {
    cout << "Product: " << name << endl;
    cout << "Price: $" << getPrice() << endl;
    cout << "Quantity: " << quantity << endl;
}
