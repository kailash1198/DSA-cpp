#include <iostream>
#include <string>

int main()
{

    std::string *nameList = new std::string[5];
    std::string search_key = "Kailash";

    nameList[0] = "Kailash";
    nameList[1] = "Aryan";
    nameList[2] = "Shyam";
    nameList[3] = "kumar";
    nameList[4] = "swami";

    for (int i = 0; i < 5; i++)
    {
        if (nameList[i] == search_key)
        {
            std::cout << "Found" << std::endl;
        }
    }
    return 0;
}