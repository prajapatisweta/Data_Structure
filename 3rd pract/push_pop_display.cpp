#include <iostream>
using namespace std;
int a[10],top;
int isfull()
{
    if(top==10)
        return 1;
    else
        return 0;
}
int  isempty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}
void push(int ele)
{
    if(isfull())
        cout<<"stack overflow \n";
    else
        top++;
        a[top]=ele;
        cout<<"push "<<ele<<"   ";
}
void pop()
{
    cout<<endl;
    if(isempty())
        cout<<"stack underflow \n";
    else
        {
            int data;
            data=a[top];
            top--;
            cout<<data<<" pop out \t";
        }
        
}
void disp()
{
    cout<<endl;
    if(isempty())
        cout<<"\nstack is empty \n";
    else
        cout<<endl<<"Display of stack ";
        for(int i=top;i>=0;i--)
        {
            cout<<endl;
            cout<<a[i]<<"\t";
            cout<<endl;
        }
}
int main()
{
    top=-1;
    push(11);
    push(12);
    push(13);
    push(14);
    
    disp();
    
    pop();
    pop();
    disp();
    
    pop();
    pop();
    disp();
    
    pop();
    return 0;  
}




