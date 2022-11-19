#include<iostream>
#include<array>

using namespace std;

int main()
{
    array<int, 4> a = {1, 2, 4, 5};

    for(int i = 0; i<a.size(); i++) {
        cout<<a[i]<<endl;
    }
    cout<<"Max size is "<<a.max_size()<<endl;
    cout<<"Element at 2nd Index "<<a.at(2)<<endl;
    cout<<"Empty or not --> "<<a.empty()<<endl;

    cout<<"First Element "<<a.front()<<endl;
    cout<<"Last Elemnt "<<a.back()<<endl;

    return 0;
}