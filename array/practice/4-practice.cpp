#include <algorithm>#include <iostream>
using namespace std;

int main(void)
{
    int arrayOne[] = {1, 2, 3, 4};
    int arrayTwo[] = {5, 6, 7, 8};

    int m = sizeof(arrayOne) / sizeof(*arrayOne);
    int n = sizeof(arrayTwo) / sizeof(*arrayTwo);

    int jointArray[m + n];
}