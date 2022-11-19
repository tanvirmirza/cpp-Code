#include<iostream>
using namespace std;

bool search (int num[], int n, int key ) {
    
    for(int i = 0; i<n; i++) {
        if(num[i] == key) {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[6] = {8, -4, 29, 38, 2, 9};
    int key;
    cout<<"Enter the element to search for "<<endl;
    cin>>key;

    bool found = search(arr, 6, key);
    if(found) {
        cout<<key<<" is Present"<<endl;
    }
    else {
        cout<<key<<" is Absent"<<endl;
    }
    return 0;
}