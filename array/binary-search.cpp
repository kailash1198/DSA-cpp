#include <iostream>
using namespace std;

int main(void)
{
    int myArray[5] = {10, 20, 30, 40, 50};
    int firstIndex = myArray[0];
    int lastIndex = myArray[4];
    int targetSearch = 10;

    int mid;

    while (firstIndex <= lastIndex)
    {
        mid = 0 + 4 / 2;
        if (myArray[mid] == targetSearch)
        {
            return mid;
        }


        if (targetSearch>myArray[mid])
        {
            firstIndex = mid + 1;
        }
        else
        {
            lastIndex = mid - 1;
        }

        mid = (firstIndex+lastIndex)/2;
    }

    cout<<mid<<endl;
}