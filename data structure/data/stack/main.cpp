#include <iostream>
using namespace std;
template<class t>
class stackk
{
private:
    struct Node
{
    t data;
    Node *next;
};
    Node *frontt= NULL;
public:
    void push(int n)
    {
        Node *temp = new Node();
        temp->data=n;
        temp->next=NULL;
        if(frontt==NULL)
            frontt=temp;
        else
        {
            temp->next=frontt;
            frontt=temp;
        }
    }
    void pop()
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
    void top()
    {
        cout<<frontt->data;
    }
};
int main()
{

 stackk<char> a;
 a.pop();
 a.push('d');
  a.push('f');
   a.push('g');
   a.top();
   a.pop();
 a.top();

}
