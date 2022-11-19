
#include<iostream>
using namespace std;

  union prize
  {
      int photato;
      char onion;
      float binjal;
  };
  
  typedef struct student
{
    string sDep;
    int sId;
    float sPoint;
    char sFavChar;

}st;


int main()
{

enum Meal {breakfast, lunch, dinner};

cout<<breakfast<<endl;
cout<<lunch<<endl;
cout<<dinner<<endl;


    
    union prize sunday;
    sunday.binjal = 60;
    sunday.onion = 'o';
    sunday.photato = 50.5;


    cout<<"Market prize of Vagetable binjal: "<<sunday.binjal<<endl;
    cout<<"Market prize of Vagetable onion: "<<sunday.onion<<endl;
    cout<<"Market prize of Vagetable photato: "<<sunday.photato<<endl;



   st tanvir;
   tanvir.sDep = "Computer Technology";
   tanvir.sId = 586560;
   tanvir.sPoint = 0.36;
   tanvir.sFavChar = 'N';

   st nahid;
   nahid.sDep = "Computer Technology";
   nahid.sId = 586556;
   nahid.sPoint = 0.37;
   nahid.sFavChar = 'S';


   cout<<"The value is Department: "<<tanvir.sDep<<endl;
   cout<<"The value is Id: "<<tanvir.sId<<endl;
    cout<<"The value is Point: "<<tanvir.sPoint<<endl;
    cout<<"The value is Favourite Charecter: "<<tanvir.sFavChar<<endl;
    cout<<endl;

    cout<<"The value is Department: "<<nahid.sDep<<endl;
   cout<<"The value is Id: "<<nahid.sId<<endl;
    cout<<"The value is Point: "<<nahid.sPoint<<endl;
    cout<<"The value is Favourite Character: "<<nahid.sFavChar<<endl;

    return 0;
}