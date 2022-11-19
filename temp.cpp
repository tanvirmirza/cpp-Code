// #include<iostream>
// using namespace std;

// struct stack
// {
//     int size;
//     int top;
//     int *arr;
// };

// int isEmpty(struct stack *ptr){
//     if (ptr->top == -1)
//     {
//         return 1;
//     }
//     return 0;
// }

// int isFull(struct stack *ptr){
//     if (ptr->top == ptr->size-1)
//     {
//         return 1;
//     }
//     return 0;
// }

// int main()
// {
//     struct stack *s;
//     s = (struct stack*)malloc(sizeof(struct stack));
//     s->top = -1;
//     s->size = 5;
//     s->arr = (int *)malloc(s->size*sizeof(int));
    
//     if(isEmpty(s)){
//         cout<<"The stack is empty"<<endl;
//     }
//     else{
//         cout<<"The stack is not empty"<<endl;
//     }
//     return 0;
// }


#include<iostream>
using namespace std;


int main() {

    int num, digit;
    cin>>num;

    digit = num%10;
   cout<<digit<<endl;

   num = num/10;
   cout<<num<<endl;


    return 0;
}