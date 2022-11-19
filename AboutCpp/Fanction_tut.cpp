#include <iostream>
using namespace std;

int sumation(int x, int y)
{
    int sum;

    sum = x + y;

    return sum;
}

int sumation(int x, int y, int z){
int sum;

    sum = x + y + z;

    return sum;
}

void substraction(int, int);

int multiflication()
{
    int x, y, multi;
    cout << "Input value of x and y = ";
    cin >> x >> y;

    multi = x * y;

    cout << "Multiflication is: ";

    return multi;
}

void divided();
string name();

int main()
{
    int a, b;
    cout << "Input value of a and b = ";
    cin >> a >> b;
    
    cout << "User input value Sumation is: " << sumation(a, b) << endl;
    cout << "Default value Sumation is: " << sumation(4, 4, 5) << endl;
    substraction(a, b);
    cout << multiflication() << endl;
    divided();
    cout<<endl;
    cout << name() << endl;
    return 0;
}

void substraction(int x, int y)
{
    int sub;

    sub = x - y;

    cout << "Substraction is: " << sub << endl;
}

void divided()
{

    // float x, y, div;
    // cout << "Input value of x and y = ";
    // cin >> x >> y;

    // div = x / y;

    // cout << "Divided is: " << div;
     int row, col;
    cout << "Input number of rows = ";
    cin >> row;
    cout << "Input number of columns = ";
    cin >> col;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    

}

string name()
{
    string str1 = "Mirza Tanvir";
    string str2 = " Mahtab";

    string ans = str1 + str2;

    return ans;
}