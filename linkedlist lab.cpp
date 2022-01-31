#include<bits/stdc++.h>
using namespace std;
void insertatbeg();
void insertatend();
void deleteatbeg();

void deleteatend();
void search();
void display();
void menu();
struct student
{
int age;
string name;
char sex;
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
cout<<"1)Insert at the beginning\n";
cout<<"2)Insert at the end\n";
cout<<"3)Delete at the beginning\n";
cout<<"4)Delete at the end\n";
cout<<"5)Search\n";
cout<<"6)Display\n";
cout<<"7)Exit\n";
cout<<"\n----------------------\n";
cout<<"Enter your choice:";
cin>>cho;
switch(cho)
{
case 1: insertatbeg();
      menu();
      break;
case 2: insertatend();
      menu();
      break;
case 3: deleteatbeg();
      menu();
      break;
//case 4: deleteatend();
//      menu();
//      break;
case 5: search();
      menu();
      break;
case 6: display();
      menu();
      break;
case 7: break;
}}
void insertatbeg()
{
student *temp;
temp=new student();
cout<<"Enter name:";
cin>>temp->name;
cout<<"\nEnter sex:";
cin>>temp->sex;
cout<<"Enter age:";
cin>>temp->age;
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
void insertatend()
{
student *temp,*temp2;
temp=new student();
cout<<"Enter name:";
cin>>temp->name;
cout<<"\nEnter sex:";
cin>>temp->sex;
cout<<"Enter age:";
cin>>temp->age;
if(head==NULL)
{
temp->next=NULL;
head=temp;
}
else
{
temp2=head;
while(temp2->next!=NULL)
    temp2=temp2->next;
temp2->next=temp;
temp->next=NULL;
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
cout<<"\n"<<temp->name;
cout<<"\n"<<temp->sex;
cout<<"\n"<<temp->age;
cout<<"\n------------";
temp=temp->next;
}}}
void deleteatbeg()
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
string key;
student *temp=head;
cout <<"enter a name\n";
cin>>key;
if(head==NULL)
cout<<"\nempty list\n";
else
{
do
{
if(temp->name==key)
{
cout<<key<<" is found \n";
b++;
break;
}
temp=temp->next;
}
while (temp!=NULL);
if(b==0)
cout <<key<<" is not found\n";
}}
