#include <iostream>
using namespace std;

// searching from array

int main()
{
    int numbers[] = {1, 5, 6, 3, 45, 23, 1, 2};
    int i;
    int x = 23;
    bool result = false;
    for (i = 0; i < 8; i++)
    {
        if (numbers[i] == x)
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