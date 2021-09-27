#include<iostream>
using namespace std;
int front=-1;
int rear=-1;
int a[5];
int size=5;
void insert(int item)
{
    cout<<"\t \t Insertion "<<endl;
    if(rear>size-1)
    {
        cout<<"Queue overflow"<<endl;
    }
    else if(front==-1 && rear==-1)
    {
        front=front+1;
        rear=rear+1;
        a[rear]=item;
    }
    else
    {
        rear=rear+1;
        a[rear]=item;
    }
    cout<<item<<" inserted"<<endl;
}
void delete1()
{
    cout<<"\t \t Deletion "<<endl;
    int item=NULL;
    if(front==-1 && rear==-1)
    {
        cout<<"Queue underflow";
    }
    else if(front>rear)
    {
        front=-1;
        rear=-1;
    }
    else if(front==rear)
    {
        item=a[front];
        a[front]=NULL;
        front=-1;
        rear=-1;
    }
    else 
    {
        item=a[front];
        a[front]=NULL;
        front++;
    }
}
void disp()
{
    cout<<"\t \t Display "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }
}
int main()
{
    insert(10);
    insert(20);
    disp();
    delete1();
    insert(30);
    insert(40);
    disp();
    delete1();
    delete1();
    delete1();
    delete1();
}