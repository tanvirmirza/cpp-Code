#include<iostream>
using namespace std;

bool isSorted(int *arr, int size){
   
    if(size == 0 || size == 1)
        return true;

    if(arr[0] > arr[1]){
        return false;
    }
    else{
        bool remainigPart = isSorted(arr + 1, size - 1);

    return remainigPart;
    }
}


int main() {

    int arr[5] = {6, 7, 10, 10, 14};
    int size = 5;
    bool ans = isSorted(arr, size);

    if(ans){
        cout << "Array is sorted" << endl;
    }
    else{
        cout << "Array is not sorted" << endl;
    }

    return 0;
}