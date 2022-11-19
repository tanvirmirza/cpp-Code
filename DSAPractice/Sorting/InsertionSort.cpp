#include<iostream>
using namespace std;

void insertionSort(int arr[], int size) {

    int temp;
    for(int i = 0; i<size; i++) {
        temp = arr[i];

        int j = i-1;
        while(j>=0) {
            if(arr[j] > temp) {
                arr[j+1] = arr[j];
            }
            else {
                break;
            }
            j--;
        }
        arr[j+1] = temp;
    }
}

void printArray(int arr[], int size) {
    
    for(int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[6] = {5, 6, 3, 9, 2, 7};

    insertionSort(arr, 6);
    printArray(arr, 6);
    

    return 0;
}