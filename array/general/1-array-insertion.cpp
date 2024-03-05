#include <iostream>
using namespace std;

int main(void)
{

    // ▶️ insert 100 in position 2

    // int position = 2;
    // int elementValue = 100;
    // int myArray[5] = {10, 20, 30, 40};

    // for (int i = 3; i >= position - 1; i--)
    // {
    //     myArray[i + 1] = myArray[i];
    // };

    // myArray[position - 1] = elementValue;

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << myArray[i] << endl;
    // }

    // ▶️ insert 100 in position 3
    // int position = 3;
    // int myArray[12] = {10, 20, 30, 40, 50, 60, 70, 80, 90};

    // for (int i = 9; i >= position - 1; i--)
    // {
    //     myArray[i + 1] = myArray[i];
    // }

    // myArray[position - 1] = 100;

    // for (int i = 0; i <10; i++)
    // {
    //     cout << myArray[i] << endl;
    // }

    // ▶️ insert 100 in position 7
    int position = 7;
    int myArray[15] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 110};

    for (int i = 9; i >= position - 1; i--) // depend on value of i (learn calculating i value)
    {
        myArray[i + 1] = myArray[i];
    }

    myArray[position - 1] = 100;

    for (int i = 0; i < 11; i++)
    {
        cout << myArray[i] << endl;
    }
}