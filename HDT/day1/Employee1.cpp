#include <iostream>
#include <iomanip>
using namespace std;
class Employee1
{
    private:
    string name;
    int idNumber;
    string department;
    string position;
    public:
    Employee1(){
        this->name = "";
        this->idNumber = 0;
        this->department = "";
        this->position = "";

    }
    Employee1(string name,int idNumber,string department,string position){
        this->name = name;
        this->idNumber = idNumber;
        this->department = department;
        this->position = position;
    }
    Employee1(string name, int idNumber){
        this->name = name;
        this->idNumber = idNumber;
        this->department = "";
        this->position = "";
    }
    string getName(){
        return this->name;
    }
    void setName(string name){
        this->name = name;
    }
    int getIdNumber(){
        return this->idNumber;
    }
    void setIdNumber(int idNumber){
        this->idNumber = idNumber;
    }
    string getDepartment(){
        return this->department;
    }
    void setDepartment(string department){
        this->department = department;
    }
    string getPosition(){
        return this->position;
    }
    void setPosition(string name){
        this->position = position;
    }
    void toString(){
        cout << setw(20) << this->name << setw(10) << this->idNumber << setw(15) << this->department << "  "
        << this->position << endl;
    }


};
int main(){
    Employee1 n1("Susan Meyers", 47899, "Accounting", "Vice President");
    Employee1 n2("Mark Jones", 39199, "IT", "Programer");
    Employee1 n3("Joy Rogers", 81774, "Manufacturing","Engineer");
    Employee1 n4("Chi", 280303);
    
    cout << setw(20) <<  "Name" << " " << setw(10) << "ID Number" << setw(15) << "Department" << "  " << "Possition"
    << endl;
    n1.toString();
    n2.toString();
    n3.toString();
    n4.toString();
    
}