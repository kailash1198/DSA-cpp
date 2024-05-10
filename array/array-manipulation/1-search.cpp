#include <iostream>
// searching number in an array using dynamic memory allocation
void numberSearch(int *array, int size, int search_key)
{

    std::cout << "Now searching number progress ..." << std::endl
              << std::endl;

    for (int i = 0; i < size; i++)
    {
        if (array[i] == search_key)
        {
            std::cout << "Found" << std::endl;
            return;
        }
    }
    std::cout << "Not found" << std::endl;
}

int main()
{
    int size = 5;
    int *myArray;
    myArray = new int(size);

    for (int i = 0; i < size; i++)
    {
        std::cin >> myArray[i];
    }
    
    //function call
    numberSearch(myArray, size, 1);

    delete[] myArray;
    return 0;
}