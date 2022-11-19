// Employee Structure;
#include <iostream>
using namespace std;

typedef struct employee
{
    string eName;
    int eId;
    int eSalary;
} emp;

int main()
{

    emp he;
    he.eName = "Sakib";
    he.eId = 5050;
    he.eSalary = 50000;

    emp she;
    she.eName = "Shishir";
    she.eId = 6060;
    she.eSalary = 60000;

    cout << "Employee Name : " << he.eName << endl;
    cout << "Employee Id : " << he.eId << endl;
    cout << "Employee Salary : " << he.eSalary << endl;

    cout << "Employee Name : " << she.eName << endl;
    cout << "Employee Id : " << she.eId << endl;
    cout << "Employee Salary : " << she.eSalary << endl;

    return 0;
}