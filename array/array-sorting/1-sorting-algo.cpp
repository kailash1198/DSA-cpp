#include <iostream>
using namespace std;
// Selection sort algorithms implementation
int main(void)
{
    int myArray[5] = {10, 30, 5, 1, 30};

    for (int j = 0; j < 5; j++)
    {
        for (int i = 0; i < 5; i++)
        {
            if (myArray[i] > myArray[i + 1])
            {
                int temp = myArray[i];
                myArray[i] = myArray[i + 1];
                myArray[i + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << myArray[i] << " ";
    }
}