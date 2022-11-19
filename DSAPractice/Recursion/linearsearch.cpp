#include<iostream>
using namespace std;

void print(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool linearSearch(int arr[], int size, int key){
 print(arr, size);

    if(size  == 0)
        return false;

    if(arr[0] == key){
        return true;
    }
    else{
        int remainingPart = linearSearch(arr + 1, size - 1, key);
        return remainingPart;
    }
}

int main() {

    int arr[5] = {6, 4, 9, 8, 22};
    int size = 5;
    double key = 7;

    int ans = linearSearch(arr, size, key);

    if(ans){
        cout<<key<<" present"<<endl;
    }
    else{
        cout<<key<<" absent"<<endl;
    }

    return 0;
}