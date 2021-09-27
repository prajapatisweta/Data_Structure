#include <iostream>
using namespace std;
int main()
{
    int a[10]={1,5,7,89,24};
    
    int ele=7,f;
    f=1;  //Element not found
    
    for(int i=0;i<5;i++)
    {
        if(a[i]==ele)
        {
          cout<<"Element found at "<<i<<endl;
          f=0;
          break;
        }
    }
    if(f==1)
    cout<<"Element not found";
    
    return 0;
}
