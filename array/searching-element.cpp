#include <iostream>
using namespace std;

int main(void)
{
    int myArray[5] = {10, 20, 30, 40, 50};
    int searchTarget = 50;
    int storeIndex;

    for (int i = 0; i < 5; i++)
    {
        if (myArray[i] == searchTarget)
        {
            cout << "Element found" << endl;
            storeIndex = i;
        }
    }

    cout << "Index number is = " << storeIndex << endl;
}