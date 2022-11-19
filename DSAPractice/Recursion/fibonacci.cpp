#include<iostream>
using namespace std;

int fib(int n){

    if(n == 0)
        return 0;

    if(n == 1)
        return 1;

    return fib(n-1) + fib(n-2);
}

int main() {

    int num;
    cout<<"Input a Number: ";
    cin>>num;

    cout<<fib(num)<<endl;

    return 0;
}

// Fibonacci Using Loop
// #include<iostream>
// using namespace std;


// int main() {

//     int n1 = 0, n2 = 1, fib;
//     int f;
//     cin>>f;

//     for(int i = 1; i<=f; i++){
//          fib = (n1-1) + (n2-2);
//          n1++;
//          n2++;
//     }

//     cout<<fib<<endl;

//     return 0;
// }