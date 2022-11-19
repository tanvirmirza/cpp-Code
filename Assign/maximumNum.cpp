/*Find maximum*/

#include<iostream>
using namespace std;


int main() {

    int arr[6] = {22, 23, 1, 77, 3, 54};
    int maxNum;
    
    maxNum = arr[0];  //Assign temporary maximum number from this array;
    for(int i = 0; i<6; i++) {
        if(maxNum<arr[i]){  //Temporary maximum number Compare to arr[i];
            maxNum=arr[i];   //Assign new maximum number;
        }
    } 
    cout<<endl; 
    cout<<maxNum<<endl;  //The loop is end than print ultimate maximun number;

    return 0;
}