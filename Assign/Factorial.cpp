//Factorial of Recursively
#include <iostream>
using namespace std;

int factorial(int n)
{

    int fact;

    if (n == 1)
        return 1;
    if (n == 0)
        return 0;
    fact = n * factorial(n - 1);

    return fact;
}

int main()
{

    int n;
    cout << "Input a number: ";
    cin >> n;

    cout << factorial(n) << endl;

    return 0;
}