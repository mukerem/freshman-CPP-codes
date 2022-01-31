/*=======GROUP MEMBERS ========
  =========GROUP 11==============
1) Mukerem Ali ------------R/0887/08
2) Mohammed Johar ---------R/0877/08
3) Muluken fikre-----------R/0895/08
*/
#include<bits/stdc++.h>
using namespace std;
void insert();
void delet();
void search();
void display();
void menu();
struct table
{
string word;
string id;
int mark;
table *next;
}hash[26];
int main()
{
for (int i=0;i<26;i++)
hash[i].next=NULL;
menu();
return 0;
}
void menu()
{
int cho;
cout<<"\n\t\t\n";
system("pause");
system("cls");
cout<<"\n\n\t\t------Menu------\n";
cout<<"\t\t1)Insert\n";
cout<<"\t\t2)Delete\n";
cout<<"\t\t3)Search\n";
cout<<"\t\t4)Display\n";
cout<<"\t\t5)Exit\n";
cout<<"\n\t\t------------------\n\n\n";
cout<<"Enter your choice:";
cin>>cho;
system("cls");
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
 int h;
string k;
table *newnode=new table() ;
cout<<"Enter a name,id,mark:";
cin>>newnode->word;
cin>>newnode->id;
cin>>newnode->mark;
h=newnode->word[0]%26;
table *temp=&hash[h];

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
h=key[0]%26;
table *temp=&hash[h];

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
h=key[0]%26;
table *temp=&hash[h];

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
for (int i=0;i<26;i++)
{
temp2=temp;
while(temp2->next!=NULL)
{
temp2=temp2->next;
cout <<temp2->word<<"\t";
cout <<temp2->id<<"\t";
cout <<temp2->mark<<"\t";
}
cout<<endl;
temp++;
}}

