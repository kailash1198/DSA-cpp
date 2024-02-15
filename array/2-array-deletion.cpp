#include <iostream>
using namespace std;

int main(void)
{
    int deleteElement = 10;
    int myArray[3] = {10, 20, 30};
    int index;

    for (int i = 0; i < 3; i++)
    {
        if (myArray[i] == deleteElement)
        {
            cout << "Element found" << endl;
            index = i;
            break;
        }
    }

    cout << "Index = " << index << endl
         << endl;

    for (int i = index; i < 3; i++)
    {
        myArray[i] = myArray[i + 1];
    }

    for (int i = 0; i < 2; i++)
    {
        cout << myArray[i] << endl;
    }
}