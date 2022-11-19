#include<iostream>
using namespace std;

int getSum(int arr[], int size){

    if(size == 0)
        return 0;
    if(size == 1)
        return arr[0];
        
    int remainingPart = getSum(arr + 1, size-1);
    int sum = arr[0] + remainingPart;

    return sum;
}

int main() {

    int arr[3] = {10, 20, 30};
    int size = 3;

    int ans = getSum(arr, size);
    cout << "Sum is " << ans << endl;
    return 0;
}