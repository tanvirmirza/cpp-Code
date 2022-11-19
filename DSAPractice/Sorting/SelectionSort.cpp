#include<iostream>
using namespace std;

void selectionSort(int arr[], int size) {

    int minIndex;
    for(int i = 0; i<size-1; i++) {
        minIndex = i;
        for(int j = i+1; j<size; j++) {
            if(arr[j] < arr[minIndex]) 
            minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }
}
void printArray(int arr[], int size) {

    for(int i = 0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    
    int arr[5] = {5, 7, 3, 9, 4};

    selectionSort(arr, 5);
    printArray(arr, 5);
    return 0;
}