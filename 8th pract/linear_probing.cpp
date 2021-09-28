// liner probing using hash 
#include <iostream>
using namespace std;
class hash1
{
    int a[10],i;
    public:
    hash1()
    {
        for(int i=0;i<10;i++)
        a[i]=-1;
    }
    int mem(int key)
    {
        return(key%10);
    }
    void insert(int key,int mem)
    {
        if(a[mem]==-1)
    {
        a[mem]=key;
    }
    else
    {
        for(int i=mem+1;i<10;i++)
        {
            if(a[i]==-1)
            {
                a[i]=key;
                break;
            }
        }
        if(i==10)
        {
            for(int i=0; i<mem;i++)
            {
                if(a[i]==-1)
                {
                    a[i]=key;
                    break;
                }
            }
        }
        else if(i==mem)
        {
            cout<<"no free slot";
        }
    }
}
void disp()
{
    for(int i=0;i<10;i++)
    {
        cout<<endl<<i<<"\t"<<a[i]<<endl;
    }
}
};

int main()
{
    hash1 h;
    int x;
    x=h.mem(34);
    h.insert(34,x);
    x=h.mem(45);
    h.insert(45,x);
    x=h.mem(24);
    h.insert(24,x);
    x=h.mem(67);
    h.insert(67,x);
    x=h.mem(48);
    h.insert(48,x);
    x=h.mem(44);
    h.insert(44,x);
    h.disp();

    return 0;
}