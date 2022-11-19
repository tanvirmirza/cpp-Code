#include<iostream>
#include<vector>

using namespace std;


int main() {

    vector<int>v;
    vector<int>a(5, 1);
    vector<int>last(a);
    
    cout<<"Print last "<<endl;
    for(int i:last) {
        cout<<i<<" ";
    }cout<<endl;

    v.push_back(1);   
    v.push_back(6);
    v.push_back(5);
    v.push_back(2);
    cout<<"Size -> "<<v.size()<<endl;

    cout<<"Front "<<v.front()<<endl;
    cout<<"Back "<<v.back()<<endl;
    cout<<"Element at 2nd Index "<<v.at(2)<<endl;

    cout<<"Before Pop "<<endl;
    for(int i:v) {
        cout<<i<<" ";
    }
    cout<<endl;
    
    v.pop_back();
    cout<<"After Pop "<<endl;
    for(int i:v) {
        cout<<i<<" ";
    }
    cout<<endl;

    v.push_back(7);
    cout<<"After push"<<endl;
    for(int i:v) {
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Before clear size"<<v.size()<<endl;
    
    v.clear();
    cout<<"After clear size"<<v.size()<<endl;
    
    return 0;
}

