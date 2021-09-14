#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};

class Link 
{
    node *head, *tail , *ptr;
    public:
    Link()
    {
        head=NULL;
        tail=NULL;
        ptr=NULL;
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
            ptr=temp;
        }
        else
        {
            tail->next= temp;
            tail=tail->next;
        }
    }
    void search(int a)
    {
        int f=0;
        while(ptr!=NULL)
        {
            if(a==ptr->data)
            {
                cout<<"Element found at \t"<<ptr->next<<endl;
                f=1;
                break;
            }
            ptr=ptr->next;
        }
        if(f==0)
        {
            cout<<"Element not found";
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
    lobj.search(10);
    lobj.search(35);

    return 0;
}
