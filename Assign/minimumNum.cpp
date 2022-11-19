/*Find minimum*/

#include<iostream>
using namespace std;


int main() {

    int arr[6] = {22, 23, 1, 77, 3, 54};
    int minNum;
    
    minNum = arr[0];  //Assign temporary minimum number from this array;
    for(int i = 0; i<6; i++) {
        
        if(minNum>arr[i]){  //Temporary minimum number Compare to arr[i];
            minNum=arr[i];   //Assign new minimum number;
        }
    }  
    cout<<minNum<<endl;  //The loop is end than print ultimate minimun number;

    return 0;
}