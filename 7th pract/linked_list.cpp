#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};

class Link 
{
    node *head, *tail;
    public:
    Link()
    {
        head=NULL;
        tail=NULL;
    }
    void add(int n)
    {
        node *temp= new node;
        temp->data= n;
        temp->next= NULL;

        if(head==NULL)
        {
            head=temp;
            tail=temp;
        }
        else
        {
            tail->next= temp;
            tail=tail->next;
        }
    }
    void disp()
    {
        while (head!=NULL)
        {
            cout<<head->data<< "\t"<<head->next<< endl;
            head=head->next;
        }
        
    }
};
int main()
{
    cout<<"Linked List :"<<endl;
    Link lobj;
    lobj.add(5);
    lobj.add(10);
    lobj.add(15);
    lobj.add(20);
    lobj.add(25);
    lobj.add(30);
    lobj.disp();

    return 0;
}
