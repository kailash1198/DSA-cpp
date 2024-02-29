#include <iostream>

using namespace std;
// Using selection algorithm
// sort string alphabetically
// a,b,c ----- z
int main(void)
{
    string userName = "kailash";
    for (int i = 0; i < userName.length(); i++)
    {
        for (int j = 0; j < userName.length(); j++)
        {
            if (userName[j] > userName[j + 1])
            {
                char temp = userName[j];
                userName[j] = userName[j+1];
                userName[j+1] = temp;
            }
        }
    }

    cout<<userName<<endl;
}