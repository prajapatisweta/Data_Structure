// min heap 
#include <iostream>
using namespace std;
int h[20], size;

void init()
{
    size=0;
    h[0]=0;
}
void add(int e)
{
    size++;
    h[size]=e;
    int current=size;
    while(h[current/2]>e)
    {
        h[current]=h[current/2];
        current=current/2;
    }
    h[current]=e;
}
int main()
{
    init();
    add(45);
    add(3);
    add(6);
    add(11);
    add(78);
    add(35);
    add(99);
    add(32);
    add(76);

    for(int i=1; i<=9; i++)
    {
        cout<<h[i]<<"  ";
    }

    return 0;
}