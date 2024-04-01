#include "Employee.h"
// Default constructor
Employee::Employee()
{
    this->name = "";
    this->idNumber = 0;
    this->department = "";
    this->position = "";
}

// Parameterized constructor with name, idNumber, department, and position
Employee::Employee(string name, int idNumber, string department, string position)
{
    this->name = name;
    this->idNumber = idNumber;
    this->department = department;
    this->position = position;
}

// Parameterized constructor with name and idNumber
Employee::Employee(string name, int idNumber)
{
    this->name = name;
    this->idNumber = idNumber;
    this->department = "";
    this->position = "";
}

// Getter for name
string Employee::getName()
{
    return this->name;
}

// Setter for name
void Employee::setName(string name)
{
    // Define the setName() implementation here
    this->name = name;
}

// Getter for idNumber
int Employee::getIdNumber()
{
    // Define the getIdNumber() implementation here
    return this->idNumber;
}

// Setter for idNumber
void Employee::setIdNumber(int idNumber)
{
    // Define the setIdNumber() implementation here
    this->idNumber = idNumber;
}

// Getter for department
string Employee::getDepartment()
{
    // Define the getDepartment() implementation here
    return this->department;
}

// Setter for department
void Employee::setDepartment(string department)
{
    // Define the setDepartment() implementation here
    this->department = department;
}

// Getter for position
string Employee::getPosition()
{
    // Define the getPosition() implementation here
    return this->position;
}

// Setter for position
void Employee::setPosition(string position)
{
    // Define the setPosition() implementation here
    this->position = position;
}
void Employee::toString()
{
    cout << setw(20) << this->name << setw(10) << this->idNumber << setw(15) << this->department << "  "
         << this->position << endl;
}
