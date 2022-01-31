#include<bits/stdc++.h>
using namespace std;
void insertat();
void deletee();

void deleteatend();
void search();
void display();
void menu();
struct student
{
int rollno;
string name;
student *next;
};
student *head=NULL;
int main()
{
menu();
return 0;
}
void menu()
{
int cho;
cout<<"--------Menu---------\n";
cout<<"1)Insert \n";
cout<<"2)Delete\n";
cout<<"3)Search\n";
cout<<"4)Display\n";
cout<<"5)Exit\n";
cout<<"\n----------------------\n";
cout<<"Enter your choice:";
cin>>cho;
switch(cho)
{
case 1: insertat();
      menu();
      break;
case 2: deletee();
      menu();
      break;
case 3: search();
      menu();
      break;
case 4: display();
      menu();
      break;
case 5: break;
}}
void insertat()
{
student *temp;
temp=new student();

cout<<"Enter roll no:";
cin>>temp->rollno;
cout<<"Enter name:";
cin>>temp->name;


if(head==NULL)
{
temp->next=NULL;
head=temp;
}
else
{
temp->next=head;
head=temp;
}}

//to display
void display()
{
student *temp;
temp=head;
if(head==NULL)
cout<<"empty list";
else
{
while(temp!=NULL)
{
    cout<<"\n"<<temp->rollno;

cout<<"\n"<<temp->name;
cout<<"\n------------";
temp=temp->next;
}}}


void deletee()
{
student *temp;
if(head==NULL)
cout<<"empty list";
else if(head->next==NULL)
{
temp=head;
head->next=NULL;
delete(temp);
}
else
{
temp=head;
head=head->next;
delete(temp);
}}

void search()
{
int b=0;
int key;
student *temp=head;
cout <<"enter a roll no\n";
cin>>key;
if(head==NULL)
cout<<"\nempty list\n";
else
{
do
{
if(temp->rollno==key)
{
cout<<key<<" is found \n";
cout<<"the name is "<<temp->name<<"\n";
b++;
break;
}
temp=temp->next;
}
while (temp!=NULL);
if(b==0)
cout <<key<<" is not found\n";
}}
