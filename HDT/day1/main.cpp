#include <iostream>
#include "Employee.cpp"
int main(){
    Employee n1("Susan Meyers", 47899, "Accounting", "Vice President");
    Employee n2("Mark Jones", 39199, "IT", "Programer");
    Employee n3("Joy Rogers", 81774, "Manufacturing","Engineer");
    Employee n4("Chi", 280303);
    
    cout << setw(20) <<  "Name" << " " << setw(10) << "ID Number" << setw(15) << "Department" << "  " << "Possition"
    << endl;
    n1.toString();
    n2.toString();
    n3.toString();
    n4.toString();

    n4.setName("Quyet");
    n4.toString();
    
   
}