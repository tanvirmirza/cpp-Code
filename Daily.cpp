// #include<iostream>
// using namespace std;
// int subtractProductAndSum(int n) {

//     int product = 1; 
//     int sum = 0;

//     while(n != 0) {
//         sum += n%10;
//         product *= n%10;
//         n /= 10; 


//     }
//     return product - sum;

// }

// int main() {

//     int n;
//     cin>>n;

//     cout<<subtractProductAndSum(n)<<endl;

    
    
    

//     return 0;
// }

#include<iostream>
using namespace std;


int main() {

  for(int i = 1; i<=6; i++){
    cout<<"i = "<<i<<endl;
    for(int j = i; j<=6; j++){
        cout<<"J = "<<j<<endl;
        
    }
    cout<<endl;
  }
    return 0;
}