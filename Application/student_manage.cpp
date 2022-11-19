#include<iostream>
using namespace std;

typedef struct student_management
{
    string Student_Dep;
    string Student_Sem;
    int Student_Id;
    float Student_Point;
}info;


int main() {

    info Tanvir;
    Tanvir.Student_Dep = "Computer Technology";
    Tanvir.Student_Sem = "4th";
    Tanvir.Student_Id = 586560;
    Tanvir.Student_Point = 3.48;
    
    return 0;
}