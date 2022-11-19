#include<iostream>
using namespace std;

void count(int n){
    //base
    if(n==0)
        return ;
    
    count(n-1);
    cout<<n<<endl;
    

}

int main() {

    int num;
    cout<<"Input a Number: ";
    cin>>num;

    count(num);

    return 0;
}