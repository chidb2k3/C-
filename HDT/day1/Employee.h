#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <iomanip>
using namespace std;
class Employee
{
    private:
    string name;
    int idNumber;
    string department;
    string position;
    public:
    Employee();
    Employee(string name,int idNumber,string department,string position);
    Employee(string name, int idNumber);
    string getName();
    void setName(string name);
    int getIdNumber();
    void setIdNumber(int idNumber);
    string getDepartment();
    void setDepartment(string department);
    string getPosition();
    void setPosition(string possition);
    void toString();
    

};
#endif