#include<iostream>
using namespace std;

void reachHome(int src, int dest){
    cout<<"step "<<src<<" destination "<<dest<<endl;
    if(src == dest){
        cout<<"Poche gelam"<<endl;
        return ;
    }
    src++;
    reachHome(src, dest);
    
}

int main() {

    int src, dest;

    src = 1;
    dest = 10;

    reachHome(src, dest);
    return 0;
}