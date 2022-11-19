// Print Array Following Sequences;

#include <iostream>
using namespace std;

void loop(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr1[7] = {-10, -5, 0, 5, 10, 15, 20};
    int arr2[6] = {24, 18, 12, 6, 0, -6};

    loop(arr1, 7);
    loop(arr2, 6);

    return 0;
}