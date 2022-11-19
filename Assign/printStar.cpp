// Print star;
#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Input a Number: ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        cout << "* ";
    }
    cout << endl;

    return 0;
}