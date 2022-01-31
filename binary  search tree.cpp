#include<bits/stdc++.h>
using namespace std;
void insert();
//void search();
void menu();
struct node
{
int data;
node *left;
node *right;
};
node *root=NULL;
void display( node *  );
int main()
{
menu();
return 0;
}
void menu()
{
int cho;
cout<<"--------BST---------\n";
cout<<"1)Insert an element\n";
cout<<"2)Search\n";
cout<<"3)Display\n";
cout<<"4)Exit\n";
cout<<"\n----------------------\n";
cout<<"Enter your choice:";
cin>>cho;
switch(cho)
{
case 1: insert();
      menu();
      break;
//case 2: search();
  //    menu();
    //  break;
case 3: display(root);
      menu();
      break;
case 4: break;
}}
void insert()
{
node *temp,*current=root;
temp=new node();
cout<<"Enter a number:";
cin>>temp->data;
temp->right=NULL;
temp->left=NULL;
if(root==NULL)
root=temp;
else
{
for(;;)
{
node *parent=current;
if(temp->data<=parent->data)
{
current=current->left;
if(current==NULL)
{
parent->left=temp;
break;
}}
else
{
current=current->right;
if(current==NULL)
{
parent->right=temp;
break;
}}}}}
void display( node *r  )
{
if(r!=NULL)
{
cout<<r->data<<"\t";
display (r->left);
display (r->right);
}}
