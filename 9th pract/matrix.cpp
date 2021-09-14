#include <iostream>
using namespace std;
class A
{
    public:
    int a[5][5],n;
    A()
    {
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                a[i][j]=0;
            }
        }
    }
    void addedge(int o,int d)
    {
        n=5;
        if(o>n||d>n||o<0||d<0)
        {
            cout<<"invalid edges";
        }
        else
        a[o-1][d-1]=1;
    }
    void disp()
    {
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                cout<<a[i][j]<<"  ";
            }
            cout<<endl;
        }
    }
};

int main()
{
    A obj;
    int o,d;
    for(int i=0;i<10;i++)
    {
        cout<<"enter edge";
        cin>>o>>d;
        if((o==-1)&&(d==-1))
        {
            break;
        }
        obj.addedge(o,d);
    }
    obj.disp();

    return 0;
}