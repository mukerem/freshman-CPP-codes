#include<iostream>
using namespace std;
void insert();
void delet();
void search();
void display();
void menu();
struct table
{
string word;
table *next;
}hash[101];
int main()
{
for (int i=0;i<101;i++)
hash[i].next=NULL;
menu();
return 0;
}
void menu()
{
int cho;
cout<<"------Menu------\n";
cout<<"1)Insert\n";
cout<<"2)Delete\n";
cout<<"3)Search\n";
cout<<"4)Display\n";
cout<<"5)Exit\n";
cout<<"\n------------------\n";
cout<<"Enter your choice:";
cin>>cho;
switch(cho)
{
case 1: insert();
      menu();
      break;
case 2: delet();
      menu();
      break;
case 3: search();
      menu();
      break;
case 4: display();
      menu();
      break;
}}
void insert()
{
long int h=0,a;
string k;
table *newnode=new table() ;
cout<<"Enter a word:";
cin>>newnode->word;
a=newnode->word.size();
for (int i=0;i<a;i++ )
h+=65599*int(newnode->word[i]);
h%=101;
table *temp=hash;
for (int i=0;i<h;i++ )
temp++;
while(temp->next!=NULL)
temp=temp->next;
temp->next=newnode;
newnode->next=NULL;
}
void delet()
{
long int a,b=0,h=0;
string key;
cout<<"Enter a word:  ";
cin>>key;
a=key.size();
for (int i=0;i<a;i++ )
h+=65599*int(key[i]);
h%=101;
table *temp=hash,*temp2;
for (int i=0;i<h;i++ )
temp++;
temp2=temp;
while(temp->next!=NULL)
{
temp=temp->next;
while(temp->word!=key)
{
temp=temp->next;
temp2=temp2->next;
}}
if(key==temp->word)
{
temp2->next=temp->next;
temp->next=NULL;
delete(temp);
cout<<" \n successfully deleted\n ";
}
else
cout<<"\nInvalid in put "<<key <<" is not found in the hash table\n";
}
void search()
{
long int a,b=0,h=0;
string key;
cout<<"Enter a word:  ";
cin>>key;
a=key.size();
for (int i=0;i<a;i++ )
h+=65599*int(key[i]);
h%=101;
table *temp=hash;
for (int i=0;i<h;i++ )
temp++;
while(temp->next!=NULL)
{
temp=temp->next;
if(key==temp->word)
{
cout <<key<<" is found \n";
b++;
break;
}}
if(b==0)
cout <<key<<" is not found \n";
}
void display()
{
table *temp=hash,*temp2;
for (int i=0;i<101;i++)
{
temp2=temp;
while(temp2->next!=NULL)
{
temp2=temp2->next;
cout <<temp2->word<<"\t";
}
temp++;
}}
