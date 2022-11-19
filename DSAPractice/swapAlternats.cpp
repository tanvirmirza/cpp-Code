#include<iostream>
using namespace std;

void alternatsArray(int arr[], int n){
    int temp;
    for(int i = 0; i<n; i += 2){
        if(i+1<n){
            // swap(arr[i], arr[i+1]);
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }

}

//Printing the array
void printArray(int arr[], int n) {

    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int even[6] = {9, 3, 2, 11, 5, 8};
    int odd[5] = {5, 6, 7, 4, 3};

    alternatsArray(even, 6);
    printArray(even, 6);

    cout<<endl;

    alternatsArray(odd, 5);
    printArray(odd, 5);

    return 0;
}