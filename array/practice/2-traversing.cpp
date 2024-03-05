#include <iostream>

int main(void)
{
    int array_size;
    std::cout << "Please enter array size : ";
    std::cin >> array_size;
    int myArray[array_size];
    std::cout << "Enter array element : ";
    for (int i = 0; i < array_size; i++)
    {
        std::cin >> myArray[i];
    }

    for (int j = 0; j < array_size; j++)
    {
        std::cout << myArray[j] << " ";
    }
}