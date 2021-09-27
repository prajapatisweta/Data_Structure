// max heap

#include <iostream>
using namespace std;
int h[20], size;

void init()
{
    size=0;
    h[0]=1234;
}
void add(int e)
{
    size++;
    h[size]=e;
    int current=size;
    while(h[current/2]<e)
    {
        h[current]=h[current/2];
        current=current/2;
    }
    h[current]=e;
}
int main()
{
    init();
    add(75);
    add(22);
    add(10);
    add(35);
    add(15);

    for(int i=1; i<=5; i++)
    {
        cout<<h[i]<<"  ";
    }

    return 0;
}