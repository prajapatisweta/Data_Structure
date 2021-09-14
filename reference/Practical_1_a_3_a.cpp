#include <iostream>
using namespace std;

// reversing the array

int main()
{
    int a[] = {12, 56, 96, 32, 12, 14};
    int t;
    for (int i = 0, j = 5; i < j; i++, j--)
    {
        t = a[i];
        a[i] = a[j];
        a[j] = t;
    }
    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}