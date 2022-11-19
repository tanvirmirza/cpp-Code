// Student Grade Point
#include <iostream>
using namespace std;

int main()
{

    int mark;
    cout << "Enter Student Mark: ";
    cin >> mark;

    if (mark >= 90 && mark <= 100)
    {
        cout << 'A' << endl;
    }
    else if (mark >= 80 && mark <= 89)
    {
        cout << 'B' << endl;
    }
    else if (mark >= 70 && mark <= 79)
    {
        cout << 'C' << endl;
    }
    else if (mark >= 60 && mark <= 69)
    {
        cout << 'D' << endl;
    }
    else if (mark >= 50 && mark <= 59)
    {
        cout << 'E' << endl;
    }
    else if (mark >= 0 && mark <= 49)
    {
        cout << 'F' << endl;
    }
    else
    {
        cout << "Invalid!";
    }

    return 0;
}