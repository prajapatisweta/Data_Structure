// date 24/08/21

#include <iostream>
using namespace std;
class Hash
{
    int a[10];

public:
    Hash()
    {
        for (int i = 0; i < 10; i++)
        {
            a[i] = -1;
        }
    }
    int mem(int key)
    {
        return (key % 10);
    }
    void insert(int key, int mem)
    {
        if (a[mem] == -1)
        {
            a[mem] = key;
        }
        else
        {
            for (int i = mem; i < 10; i++)
            {
                if (a[i] == -1)
                {
                    a[i] = key;
                    break;
                }
                else if (i == 9)
                {
                    for (int i = 0; i < mem; i++)
                    {
                        if (a[i] == -1)
                        {
                            a[i] = key;
                            break;
                        }
                        else if (i == mem - 1)
                        {
                            cout << "No free memory location available" << endl;
                        }
                    }
                }
            }
        }
    }
    void display()
    {
        for (int i = 0; i < 10; i++)
        {
            cout << i << "\t" << a[i] << endl;
        }
    }
};

int main()
{
    Hash h1;
    int x;
    x = h1.mem(34);
    h1.insert(34, x);
    x = h1.mem(45);
    h1.insert(45, x);
    x = h1.mem(24);
    h1.insert(24, x);
    x = h1.mem(67);
    h1.insert(67, x);
    x = h1.mem(48);
    h1.insert(48, x);
    h1.display();
    return 0;
}