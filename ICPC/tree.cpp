#include<bits/stdc++.h>
void insert();
void search();
void display(node *);
void menu();
struct node
{
int data;
node *left;
node *right;
};
node *root=NULL;
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
case 2: search();
      menu();
      break;
case 3: display(root);
      menu();
      break;
case 4: break;
}}
void insert()
{
node *temp,*current=root,*parent=current;
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
if(temp->dtat<=parent->data)
current=current->left;
if(current==NULL)
{
parent->left=temp;
break;
}
else
{
current=current->right;
if(current==NULL)
parent->right=temp;
break;
}}}

