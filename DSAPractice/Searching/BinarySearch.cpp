#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {

    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if(arr[mid] == key) {
            return mid;
        }
        if(arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = (start + end) / 2; 
    }
    return -1;    
}

int main()
{
    //binary search alogaridom is like a game :)

    int arr[20] = {3, 6, 8, 11, 15, 18, 20, 27, 34, 42, 45, 52, 56, 65, 70, 71, 77, 88, 99, 105};
    int key;
    cout<<"Enter the key ";
    cin>>key;

    int index = binarySearch(arr, 20, key);

    cout<<"Index of "<<key<<" is "<<index<<endl;

    return 0;
}