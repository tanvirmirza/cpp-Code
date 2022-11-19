#include<iostream>
using namespace std;

int fact(int n){

    if(n==0)
        return 1;

    return n*fact(n-1);
}
int main() {

    int num;
    cout<<"Input a Number: ";
    cin>>num;

    int result = fact(num);
    cout<<result<<endl;

    return 0;
}