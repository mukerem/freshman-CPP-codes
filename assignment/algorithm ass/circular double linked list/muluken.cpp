/*=======GROUP MEMBERS ========
  =========GROUP 11==============
1) Mukerem Ali ------------R/0887/08
2) Mohammed Johar ---------R/0877/08
3) Muluken fikre-----------R/0896/08
*/
#include<bits/stdc++.h>
using namespace std;
void deleteatbeg();
void deleteatend();
void insertatbeg();
void insertatend();
void display();
void search();
void menu();
struct student
{
int age;
string name;
char sex;
student *next;
student *prev;
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
system("pause");
system("cls");
cout<<"--------Menu---------\n";
cout<<"1)Insert at the beginning\n";
cout<<"2)Insert at the end\n";
cout<<"3)Delete at the beginning\n";
cout<<"4)Delete at the end\n";
cout<<"5)Display\n";
cout<<"6)Search\n";
cout<<"7)Exit\n";
cout<<"\n----------------------\n";
cout<<"Enter your choice:";
again:
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
case 4: deleteatend();
      menu();
      break;
case 5: display();
      menu();
      break;
case 6: search();
      menu();
      break;
case 7: break;
default :
      {cout<<"enter a valid number\n";
      goto again;
      }
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
temp->next=temp;
temp->prev=temp;
head=temp;
}
else
{
head->prev->next=temp;
temp->prev=head->prev;
head->prev=temp;
temp->next=head;
head=temp;
}}
void insertatend()
{
student *temp,*temp2;
temp=new student();
cout<<"Enter name:";
cin>>temp->name;
cout<<"Enter sex:";
cin>>temp->sex;
cout<<"Enter age:";
cin>>temp->age;
if(head==NULL)
{
temp->next=temp;
temp->prev=temp;
head=temp;
}
else
{
head->prev->next=temp;
temp->prev=head->prev;
head->prev=temp;
temp->next=head;
}}
// delete at the beginning
void deleteatbeg()
{
student *temp;
if(head==NULL)
cout<<"empty list\n";
else if(head->next==head)
{
temp=head;
head->next=NULL;
head->prev=NULL;
head=NULL;
delete(temp);
cout<<"successfully deleted\n";
}
else
{
temp=head;
head->next->prev=head->prev;
head->prev->next=head->next;
head=head->next;
temp->next=NULL;
temp->prev=NULL;
delete(temp);
cout<<"successfully deleted\n";
}}
void deleteatend()
{
student *temp;
if(head==NULL)
cout<<"empty list\n";
else if(head->next==head)
{
temp=head;
head->next=NULL;
head->prev=NULL;
delete(temp);
cout<<"successfully deleted\n";
}
else
{
temp=head->prev;
temp->prev->next=head;
head->prev=temp->prev;
temp->next=NULL;
temp->prev=NULL;
cout<<"successfully deleted\n";
delete(temp);
}}
void search()
{
string key;
int a=0;
cout<<"Enter a name ";
cin>>key;
if(head==NULL)
cout<<"empty list";
else
{
student *temp=head;
do
{
if(temp->name==key)
{
cout<<key<<" is found \n";
a++;
break;
}
temp=temp->next;
}
while(temp!=head);
if (a==0)
cout<<key<<" is not found \n";
}
}
//to display
void display()
{
student *temp;
temp=head;
if(head==NULL)
cout<<"empty list\n";
else
{
do
{
cout<<"\n"<<temp->name;
cout<<"\n"<<temp->sex;
cout<<"\n"<<temp->age;
cout<<"\n------------";
temp=temp->next;
}
while(temp!=head);
}}

