#include<iostream>
using namespace std;
class Hash{
public :
    int h;
    struct table
    {
    string name;
    string id;
    int mark;
    table *next;
    }hash[26];
    Hash(){
        for (int i=0;i<26;i++)
            hash[i].next=NULL;
        }
// insert node
void insert(string word2 , string id2 , int mark2)
{
table *newnode=new table() ;
h=word2[0]%26;
table *temp=&hash[h];

while(temp->next!=NULL)
temp=temp->next;
temp->next=newnode;
newnode->name=word2;
newnode->id=id2;
newnode->mark=mark2;

newnode->next=NULL;
}
void delet(string key)
{
 h=key[0]%26;
table *temp=&hash[h] ,*temp2;

temp2=temp;
while(temp->next!=NULL)
{
temp=temp->next;
while(temp->name!=key)
{
temp=temp->next;
temp2=temp2->next;
}}
if(key==temp->name)
{
temp2->next=temp->next;
temp->next=NULL;
delete(temp);
cout<<" \n successfully deleted\n ";
}
else
cout<<"\nInvalid in put "<<key <<" is not found in the hash table\n";
}
void search(string key)
{
int b=0;
 h=key[0]%26;
table *temp=&hash[h];
while(temp->next!=NULL)
{
temp=temp->next;
if(key==temp->name)
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
cout <<temp2->name<<"\t";
cout <<temp2->id<<"\t";
cout <<temp2->mark<<"\t";
cout<<endl;
}
temp++;
}

}};


int  main(){

Hash h;
int cho,mark2;
string name2,id2;
do{
cout<<"\n\t\t";
cout<<"\n\n\t\t------Menu------\n";
cout<<"\t\t1)Insert\n";
cout<<"\t\t2)Delete\n";
cout<<"\t\t3)Search\n";
cout<<"\t\t4)Display\n";
cout<<"\t\t5)Exit\n";
cout<<"\n\t\t------------------\n";
cout<<"Enter your choice:";
cin>>cho;
switch(cho)
{
case 1:{
    cout<<"Enter a name , id ,mark:  ";
    cin>>name2;
    cin>>id2;
     cin>>mark2;
     h.insert( name2 ,  id2 , mark2);
      break;
}
case 2:{
    cout<<"Enter a name:  ";
    cin>>name2;
    h.delet(name2);
    break;
}
case 3:{
    cout<<"Enter a name:  ";
cin>>name2;
     h.search(name2);
      break;}
case 4: h.display();
      break;
default :
    goto end;
}

}
while(true);
end:
    return 0;
}
