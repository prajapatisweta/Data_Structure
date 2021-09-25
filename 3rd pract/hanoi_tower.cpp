#include<iostream>
using namespace std;
void tower(int n,char from,char aux,char to)
{
    if(n==1)
    {
        
        cout<<"move disk 1 from \t"<<from<<"  to  "<<to<<endl;
        return;
    }
    else
    {
        tower(n-1,from,to,aux);
        cout<<"move disk "<<n<<" from \t"<<from<<"  to  "<<to<<endl;
        tower(n-1,aux,from,to);
    }
}

int main()
{
    int n;
    cout<<"Enter no. of disk  ";
    cin>>n;
    tower(n,'A','C','B');

    return 0;
}