#include <iostream>
using namespace std;
int main()
{
    cout<<"MATRIX A"<<endl;
    int a[2][2];
    for (int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cout<<"Enter element ";
            cin>>a[i][j];
        }
        
    }
    cout<<endl<<"MATRIX B"<<endl;
    int b[2][2];
    for (int i=0; i<2; i++)
    {
         for(int j=0; j<2; j++)
        {
            cout<<"Enter element ";
            cin>>b[i][j];
        }
    }
    cout<<endl<<"MATRIX ADDITION"<<endl;
    int c[2][2];
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            cout<<c[i][j]<<"\t";  
        }
        cout<<endl;
    }
    return 0;
}