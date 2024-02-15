#include <algorithm>
#include <iostream>
using namespace std;

int main(void)
{
    // bubble sorting
    int myArray[7] = {6, 2, 8, 4, 5, 3, 7};

    int i, j;
    int tem;

    // before sorting
    for (i = 0; i < 7; i++)
    {
        cout << myArray[i] << "    ";
    }

    cout << endl
         << endl;

    // bubble sort logic //for understanding go in ipad goodnote array notes pages for visualize diagrams

    for (j = 0; j < 7; j++)
    {
        for (i = 0; i < 7; i++)
        {

            if (myArray[i] > myArray[i + 1])
            {
                tem = myArray[i];

                myArray[i] = myArray[i + 1];
                myArray[i + 1] = tem;
            }
        }
    }

    // after bubble sort logic

    for (int i = 0; i < 7; i++)
    {
        cout << myArray[i] << "    ";
    }
}