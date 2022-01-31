 #include<iostream>
using namespace std;
class stac
{
private:
    struct node
    {
    int data;
    node *next;
    };
     node *fron=NULL;
public:
void push(int num)
{
node *temp=new node();
temp->data=num;
temp->next=NULL;
if(fron==NULL)
fron=temp;
else
{
temp->next=fron;
fron=temp;
}
}
void pop()
{
if(fron==NULL)
cout<<"empty stack";
else{
node *temp=fron;
fron=fron->next;
temp->next=NULL;
delete(temp);
}
}
int top()
{
if(fron==NULL)
cout<<"stack is empty\n";
else
cout<<fron->data<<"\t";
}
int empt()
{
if(fron==NULL)
return 1;
else
return 0;
}
};
int main()
{
stac a;
a.push(4);
a.push(8);
a.push(1);
a.push(3);
while(!a.empt()){
a.top();
a.pop();
}
a.top();
}

