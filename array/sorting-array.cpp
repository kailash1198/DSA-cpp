#include <iostream>
using namespace std;

int sortingArray(int myArray[], int size)
{
    myArray[size];
}

int main(void)
{
    // sorting in creament order

    int myArray[7] = {20, 30, 10, 50, 90, 5, 20};
    int temp;
    int sortedArray[7];

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (myArray[i] <= myArray[i + 1])
            {
                temp = myArray[i];
                sortedArray[j] = myArray[i];
            }
        }
    }

    for (int i = 0; i < 7; i++)
    {
        cout << sortedArray[i] << endl;
    }
}