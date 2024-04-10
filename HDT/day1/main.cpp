#include <iostream>
#include "Employee.cpp"
#include <vector>
int main(){
    Employee n1("Susan Meyers", 47899, "Accounting", "Vice President");
    Employee n2("Mark Jones", 39199, "IT", "Programer");
    Employee n3("Joy Rogers", 81774, "Manufacturing","Engineer");
    Employee n4("Chi", 280303);
    vector<Employee> ds;
    ds.push_back(n1);
    ds.push_back(n2);
    for (int i = 0; i < ds.size(); i++)
    {
        ds[i].toString();
    }
    
    // cout << setw(20) <<  "Name" << " " << setw(10) << "ID Number" << setw(15) << "Department" << "  " << "Possition"
    // << endl;
    // n1.toString();
    // n2.toString();
    // n3.toString();
    // n4.toString();

    // n4.setName("Quyet");
    // n4.toString();
    
   
}