#include<iostream>
using namespace std;

// Print a solid rectangle
void Problem_01(){
    //input
    int row, col;
    cout<<"Input number of row = ";
    cin>>row;
    cout<<"Input number of col = ";
    cin>>col;

    for(int i = 1; i<= row; i++){
        for(int j = 1; j<= col; j++){
            cout<<"* ";
        }
        cout<<endl;  
    }
}

// Print a hollow rectangle.
 void Problem_02(){
    int row, col;
    cout<<"Input number of row = ";
    cin>>row;
    cout<<"Input number of col = ";
    cin>>col;

    for(int i = 1; i<=row; i++){
        for(int j = 1; j<=col; j++){
            if(i==1 || i==row || j==1 || j==col){
                cout<<"*";
            }
            else{
                cout<<" ";
            
            }
            
        }
        cout<<endl;
    }
 }

// Print Half Pyramid Pattern using Stars.
void Problem_03(){
    int nth;
    cout<<"Input number of nth = ";
    cin>>nth;

    for(int i = 1; i<=nth; i++){
        for(int j = 1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
 }

 // Print an Inverted Half pyramid.
 void Problem_04(){
    int nth;
    cout<<"Input number of nth = ";
    cin>>nth;

    for(int i = 1; i<=nth; i++){
        for(int j = i; j<=nth; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
}

// Print Half Pyramid after 180 degree rotation.
void Problem_05(){
    int nth;
    cout<<"Input number of nth= ";
    cin>>nth;

    for(int i = 1; i<=nth; i++){
        for(int j = 1; j<=nth; j++){
            if(j<=nth-i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}

// Print Half Pyramid using numbers.
void Problem_06(){
    int nth;
    cout<<"Input number of nth = ";
    cin>>nth;

    for(int i = 1; i<=nth; i++){
        for(int j = 1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

// Print Inverted Half Pyramid using numbers.
void Problem_07(){
    int nth; 
    cout<<"Input number of nth = ";
    cin>>nth;

    for(int i = nth; i>=1; i--){
        for(int j = 1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

// Print Half Pyramid using numbers - 2.
void Problem_08(){
    int nth;
    cout<<"Input number of nth = ";
    cin>>nth;

    for(int i = 1; i<=nth; i++){
        for(int j = 1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

// Print Inverted Half Pyramid using numbers - 2.
void Problem_09(){
    int nth;
    cout<<"Input number of nth = ";
    cin>>nth;

    for(int i = 1; i<=nth; i++){
        for(int j = i; j<=nth; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

// Print Floyd's Triangle.
void Problem_10(){
    int nth;
    cout<<"Input number of nth = ";
    cin>>nth;

    int num = 1;
    for(int i = 1; i<=nth; i++){
        for(int j = 1; j<=i; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}

// Print 0-1 pattern.
void Problem_11(){
    int nth;
    cout<<"Input number of nth = ";
    cin>>nth;

    for(int i = 1; i<=nth; i++){
        for(int j = 1; j<=i; j++){
            if((i+j)%2==0){
                cout<<"1"<<" ";
            }
            else{
                cout<<"0"<<" ";
            }
        }
        cout<<endl;
    }
}

// Palindromic pattern.
void Problem_12(){
    int nth;
    cout<<"Input number of nth = ";
    cin>>nth;

    int i, j, s;

    for(i = 1; i<=nth; i++){
        for(s = nth-1; s>=i; s--){
            cout<<" ";
        }
        for(j = i; j>=1; j--){
            cout<<j;
        }
        for(j = j+2; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }
}

/*Advanced Pattern Problems*/

// Print Diamond using Stars : Given n, print diamond with 2*n rows.
void Problem_13(){
    int nth;
    cout<<"Input number of nth = ";
    cin>>nth;

    int i, j, s;
    for( i = 1; i<=nth; i++){
        for(s = nth-1; s>=i; s--){
            cout<<" ";
        }
        for(j = i; j>=1; j--){
            cout<<"*";
        }
        for(j=j+2; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for( i = nth; i>=1; i--){
        for(s = nth-1; s>=i; s--){
            cout<<" ";
        }
        for(j = i; j>=1; j--){
            cout<<"*";
        }
        for(j=j+2; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

// Print Hollow Diamond using Stars.
void Problem_14(){
    int nth;
    cout<<"Input number of nth = ";
    cin>>nth;

    int i, j, s;
    for(i = 1; i<=nth; i++){
        for(s = nth-1; s>=i; s--){
            cout<<" ";
        }
        for(j = 1; j<=i; j++){
            if(j==1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
        for(j = 2; j<=i; j++){
            if(j==i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(i = nth; i>=1; i--){
        for(s = nth-1; s>=i; s--){
            cout<<" ";
        }
        for(j = 1; j<=i; j++){
            if(j==1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        for(j = 2; j<=i; j++){
            if(j==i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

// Print Hollow Diamond Inscribed in a Rectangle.
void Problem_15(){
    int nth;
    cout<<"Input number of nth = ";
    cin>>nth;

    int i, j, e;
    for(i = 1; i<=nth; i++){
        for(e = nth-1; e>=i; e--){
            cout<<"*";
        }
        for(j = 1; j<=i; j++){
            if(j==1 ){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        for(j = 2; j<=i; j++){
            if(j==i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        for(e = nth-1; e>=i; e--){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i = nth; i>=1; i--){
        for(e = nth-1; e>=i; e--){
            cout<<"*";
        }
        for(j = 1; j<=i; j++){
            if(j==1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        for(j = 2; j<=i; j++){
            if(j==i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        for(e = nth-1; e>=i; e--){
            cout<<"*";
        }
        cout<<endl;
    }
}

// Print Solid Rhombus.
void Problem_16(){
    int nth;
    cout<<"Input number of nth = ";
    cin>>nth;

    int i, j, s;
    for(i = 1; i<=nth; i++){
        for(s = nth-1; s>=i; s--){
            cout<<" ";
        }
        for(j = 1; j<=nth; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

// Print Hollow Rhombus.
void Problem_17(){
    int nth;
    cout<<"Input number of nth = ";
    cin>>nth;

    int i, j, s;
    for(i = 1; i<=nth; i++){
        for(s = nth-1; s>=i; s--){
            cout<<" ";
        }
        for(j = 1; j<=nth; j++){
            if(i == 1 || i == nth){
                cout<<"*";
            }
            else if(j == 1 || j == nth){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

// Pyramid pattern for Numbers.
void Problem_18(){
    int nth;
    cout<<"Input number of nth = ";
    cin>>nth;

    int i, j, s;
    for(i = 1; i<=nth; i++){
        for(s = nth-1; s>=i; s--){
            cout<<" ";
        }
        for(j = 1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

// Pyramid Pattern for Numbers - 2.
void Problem_19(){
    int nth;
    cout<<"Input number of nth = ";
    cin>>nth;

    int i, j, s;
    for(i = 1; i<=nth; i++){
        for(s = nth-1; s>=i; s--){
            cout<<" ";
        }
        for(j = 1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

// Print Sold Butterfly Pattern.
void Problem_20(){
    int nth;
    cout<<"Input number of nth = ";
    cin>>nth;

    int i, j, s;
    for(i = 1; i<=nth; i++){
        for(j = 1; j<=i; j++){
            cout<<"*";
        }
        for(s = 1; s<=2*nth-i*2; s++){
            cout<<" ";
        }
        for(j = 1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i = nth; i>=1; i--){
        for(j = 1; j<=i; j++){
            cout<<"*";
        }
        for(s = 1; s<=2*nth-i*2; s++){
            cout<<" ";
        }
        for(j = 1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

// Print Hollow Butterfly Pattern.
void Problem_21(){
    int nth;
    cout<<"Input number of nth = ";
    cin>>nth;

    int i, j, s;
    for(i = 1; i<=nth; i++){
        for(j = 1; j<=i; j++){
            if(j==1 || j==i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        for(s = 1; s<=2*nth-i*2; s++){
            cout<<" ";
        }
        for(j = 1; j<=i; j++){
            if(j==1 || j==i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(i = nth; i>=1; i--){
        for(j = 1; j<=i; j++){
            if(j==1 || j==i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        for(s = 1; s<=2*nth-i*2; s++){
            cout<<" ";
        }
        for(j = 1; j<=i; j++){
            if(j == 1 || j == i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

// Print Pascal s Triangle.
void Problem_22(){
    int nth;
    cout<<"Input number of nth = ";
    cin>>nth;

    int i, j, s;
    for(i = 1; i<=nth; i++){
        for(s = nth-1; s>=i; s--){
            cout<<" ";
        }
        for(j = 1; j<=i; j++){
           cout<<j;
           cout<<" ";
        }
        
        cout<<endl;
    }
}

// Zig-Zag Pattern.
void Problem_23(){
    int nth;
    cout<<"Input number of nth = ";
    cin>>nth;

    int i, j, s;
    for(i = 1; i<=nth; i++){
        for(s =  nth-1; s>=i; s--){
            cout<<" ";
        }
        for(j = 1; j<=i; j++){
            if(j==1 || j==i){
                cout<<"* "<<" ";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

int main() {

    // Problem_01();    // Print a solid rectangle

    // Problem_02();    // Print a hollow rectangle.

    // Problem_03();    // Print Half Pyramid Pattern using Stars.

    // Problem_04();    // Print an Inverted Half pyramid.

    // Problem_05();    // Print Half Pyramid after 180 degree rotation.

    // Problem_06();    // Print Half Pyramid using numbers.

    // Problem_07();   // Print Inverted Half Pyramid using numbers.

    // Problem_08();   // Print Half Pyramid using numbers - 2.

    // Problem_09();   // Print Inverted Half Pyramid using numbers - 2.

    // Problem_10();   // Print Floyd's Triangle.

    // Problem_11();   // Print 0-1 pattern.

    // Problem_12();   // Palindromic pattern.

    // Problem_13();   // Print Diamond using Stars : Given n, print diamond with 2*n rows.

    // Problem_14();   // Print Hollow Diamond using Stars.

    // Problem_15();   // Print Hollow Diamond Inscribed in a Rectangle.

    // Problem_16();   // Print Solid Rhombus.

    // Problem_17();   // Print Hollow Rhombus.

    // Problem_18();   // Pyramid pattern for Numbers.

    // Problem_19();   // Pyramid Pattern for Numbers - 2.

    // Problem_20();   // Print Sold Butterfly Pattern.

    // Problem_21();   // Print Hollow Butterfly Pattern.

    // Problem_22();   // Print Pascal s Triangle.(X)

    // Problem_23();   // Zig-Zag Pattern.(X)


    return 0;
}