#include <iostream>
using namespace std;

int main(void)
{
    // Insertion array - add element in inside array
    // position = index-1
    // index = 0,1,2,3,4 ...

    // question =  Insert 6 value in index 2
    int position = 3; // index 2
    int myArray[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int value = 200;

    for (int i = 8; i > position-1; i--)
    {
        myArray[i + 1] = myArray[i];
        myArray[position-1] = value;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << myArray[i] << endl;
    }
}