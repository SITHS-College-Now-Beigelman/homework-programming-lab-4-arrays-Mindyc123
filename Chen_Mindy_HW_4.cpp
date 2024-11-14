//Mindy Chen
//11.14.24
//HW 4: Array

#include <iostream>
using namespace std;

void filterEvens (int myArray [], int size);

int main()
{
    int i;
    int myArray[7];

    cout << "Enter 8 numbers: " <<endl;

    for (i = 0; i < 7; i++)
        cin >> myArray[i];

    filterEvens (myArray, 7);


    return 0;
}

void filterEvens (int myArray [], int size)
{
    for (int i = 0; i < size; i++) 
    {
        if ( myArray[i] % 2 == 0)
            cout << myArray[i];
    }
}