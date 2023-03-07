#include "iostream"
#include "vector"
#include "Employee.h"
#include "iomanip"

using namespace std;

const int col = 4;
const int col_w = 20;

void drawLine();
void printEmployee();
void printEmployee(const Employee emp);

int main(int argc, char const *argv[])
{
    Employee emp1("Susan Meyers", 47899, "Accounting", "Vice President");
    Employee emp2("Mark Jones", 39119);
    Employee emp3;

    emp2.setDepartment("IT");
    emp2.setPosition("Programmer");

    emp3.setName("Joy Rogers");
    emp3.setIdNumber(81774);
    emp3.setDepartment("Manufacturing");
    emp3.setPosition("Engineer");

    drawLine();
    printEmployee();
    drawLine();

    printEmployee(emp1);
    printEmployee(emp2);
    printEmployee(emp3);

    drawLine();

    return 0;
}

void drawLine()
{
    cout << setfill('-');
    cout << setw(col_w * col + (col + 1)) << "-" << endl;
    cout << setfill(' ');
}

void printEmployee()
{
    cout << " " << setw(col_w) << left << "Name" << setw(col_w) << left << "ID Number" << setw(col_w) << left << "Department" << setw(col_w) << left << "Position" << endl;
}

void printEmployee(const Employee emp)
{
    cout << " " << setw(col_w) << left << emp.getName() << setw(col_w) << left << emp.getIdNumber() << setw(col_w) << left << emp.getDepartment() << setw(col_w) << left << emp.getPosition() << endl;
}
