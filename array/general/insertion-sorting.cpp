#include <iostream>
using namespace std;

int main(void)
{
    int myArray[5] = {100, 30, 40, 500, 60};
    int temp;
    for (int i = 0; i < 5; i++)
    {
        cout << myArray[i] << " " << endl;
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (myArray[j] > myArray[j + 1])
            {
                temp = myArray[j];
                myArray[j] = myArray[j + 1];
                myArray[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << myArray[i] << " ";
    }
}