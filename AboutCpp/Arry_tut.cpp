#include <iostream>
using namespace std;

int main()
{
    string name[5] = {
        "Ismail",
        "Antu",
        "Nahid",
        "Tanvir",
        "Iyasin",
    };

    float point[5] = {3.95, 3.90, 3.71, 3.45, 3.33};

    string rank[5] = {"st", "nd", "rd", "th", "th"};

    int r;
    cout << "Input Number Of Final Exam Ranking: ";
    cin >> r;

    if(r<=5)
    {
        cout << r << rank[r - 1] << " is " << name[r - 1] << " and his point is " << point[r - 1] << endl;
    }
    else{
        cout<<"Sorry!! We haven't found the the Search Element "<<r<<endl;
    }

    string nam;
    cout<<"Input Student name: ";
    cin>>nam;

    int flag = 0;
    int i;
    for (i = 0; i <= 5; i++)
    {
        if (name[i] == nam)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        cout << name[i] << " is a " << i + 1 << rank[i] << " Position of final Exam. His point is " << point[i] << endl;
    }
    else
    {
        cout << "Sorry!! We haven't found the Search Element " << nam << endl;
    }

    return 0;
}




