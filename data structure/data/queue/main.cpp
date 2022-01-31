#include <iostream>
using namespace std;
template<class t>
class queuee
{
private:
    struct Node
{
    t data;
    Node *next;
};
    Node *frontt= NULL;
public:
    void enqueue(int n)
    {
        Node *temp = new Node();
        temp->data=n;
        temp->next=NULL;
        if(frontt==NULL)
            frontt=temp;
        else
        {
        Node *temp1=frontt;
        while(temp1->next!=NULL)
            temp1=temp1->next;
        temp1->next=temp;
        }
    }
    void fronti()
    {
        if(frontt==NULL)
        {
            cout<<"stack is empty";
            return;
        }
        Node* temp= frontt;
        frontt=temp->next;
        delete(temp);
    }
    void fron()
    {
        cout<<frontt->data;
    }
};
int main()
{
    queuee<int> a;
    a.enqueue(2);
    a.enqueue(3);
    a.enqueue(10000000000);
   a.fron();
   a.fronti();
   a.fron();}
