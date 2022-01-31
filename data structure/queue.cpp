#include<iostream>
using namespace std;
template<class T>
class queu
{
private:
struct node
{
T data;
node *next;
};
node *frontt=NULL,*rare=NULL;
public:
void enqueue(T n)
{
node *temp=new node();
temp->data=n;
temp->next=NULL;
if(rare==NULL){
frontt=temp;
rare=temp;
}
else{
rare->next=temp;
rare=temp;
}
}
void dequeue()
{
if(rare==NULL)
cout<<"queue is empty\n";
else{
node *temp=frontt;
frontt=frontt->next;
temp->next=NULL;
delete(temp);
}
}
void top()
{
if(frontt==NULL)
cout<<"queue is empty\n";
else
cout<<frontt->data<<"\t";
}
int emptyy()
{
if(frontt==NULL)
return 1;
else
return 0;
}
};
int main()
{
queu <string> b;
b.enqueue("abc");
b.enqueue("sf");
b.enqueue("l");
b.enqueue("g");
b.enqueue("o");
b.dequeue();
while(!b.emptyy()){
b.top();
b.dequeue();
}
b.top();
}
