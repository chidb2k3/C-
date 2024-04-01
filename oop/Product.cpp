#include <iostream>
using namespace std;
class Product
{
private:
    int id;
    string name;
public:
    // Product(){
    //     id = 0;
    //     name = "";
    // }
    Product(){

    }
    Product(int id, string name){
        this->id = id;
        this->name = name;
    }
    int getId(){
        return this->id;
    }
    void setId(int id){
        this->id = id;
    }
    string getName(){
        return this->name;
    }
    void setName(string name){
        this->name = name;
    }
   
   
};

int main(){
    Product pr(1, "Chí");
    cout << "Họ Tên: " << pr.getName();
    pr.setName("Quyết");
    cout << pr.getName();
    
    
}