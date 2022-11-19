#include<iostream>
using namespace std;

void reverseArray(int arr[], int n){

    int start = 0;
    int end = n-1;
    int temp;

    while(start<=end){
        // swap(arr[start], arr[end]);
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void printArray(int arr[], int n){

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[4] = {3, 5, 6, 4};

    reverseArray(arr, 4);
    printArray(arr, 4);

    return 0;
}