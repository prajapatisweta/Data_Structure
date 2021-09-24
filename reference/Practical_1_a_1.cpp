#include <iostream>
using namespace std;

// searching from array

int main()
{
    int elements[] = {1, 15, 6, 32, 45, 23, 11, 42};
    int i;
    int x = 23;
    bool result = false;
    for (i = 0; i < 8; i++)
    {
        if (elements[i] == x)
        {
            result = true;
            break;
        }
    }
    if (result)
    {
        cout <<"Found element "<< x << " at index " << i + 1 << endl;
    }
    else
    {
        cout << x << " is NOT present in the array" << endl;
    }
    return 0;
}