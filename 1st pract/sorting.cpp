// searching and sorting 
// 28/06/21

#include <iostream>
using namespace std;
int main()
{
    int i,f=1;
    int a[]={12,3,44,2,21,55,23};
    int x=44;
    for(i=0 ; i<=6 ; i++)
    {
        if(a[i]==x)
        {
            f=0;
            break;
        }
    }
    if(f==1)
    cout<<"Element not found "<<endl;
    else
    cout<<"Element found at "<<i;
    for(i=0 ; i<=6 ; i++)
    {
        for(int j=0 ; j<=6-i; j++)
        {
            if(a[j]>a[j+1])
            {
                int t;
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for(i=0; i<=6; i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"end";
    return 0;
}