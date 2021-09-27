#include <iostream>
using namespace std;
int main()
{
    int a[]={5,3,2,6,8};
    int lb,ub,mid,ele;
    lb=0;ub=4;
    ele=6;
    while(lb<=ub)
    {
        mid=(lb+ub)/2;
        if(a[mid]==ele)
        {
            cout<<"Element found at index "<<mid<<endl;
            break;
        }
        else if(ele>a[mid])
            lb=mid+1;
        else
            ub=mid-1;
    }
    if(lb>ub)
        cout<<"Element not found"<<endl;
    return 0;
}
