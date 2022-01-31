#include <iostream>
#include <fstream>
#include <iomanip>
#include<cmath>
struct student
{
int num;
student *next;
};
using namespace std;
int main()
{
do
{
int choice,decimal,like,dec;
student *temp,*temp2,*head=NULL;

cout<<"Enter your number\n";
cin>>temp->num;
dec=temp->num;
if(temp->num==0)
cout<<"The binary code of "<<temp->num<<" is 0000";
else
{
decimal=temp->num;
while(decimal>0)
{
temp=new student();
temp->num=decimal%2;
decimal=decimal/2;
if(head==NULL)
{
temp->next=NULL;
head=temp;
}
else
{
temp->next=head;
head=temp;
}}}
cout<<"The binary code of "<<dec<<" is\n";
student *temp1;
temp1=head;
if(head==NULL)
cout<<"empty list";
else
{
while(temp1!=NULL)
{
cout<<temp1->num;
temp1=temp1->next;
}}

cout<<"\n\nChoice List\n\n";
         cout<<"1)  To convert another decimal to binary\n";
         cout<<"2)  To EXIT\n";
         cin>>choice;
         switch(choice)
         {
         case 1:
                break;
         case 2: goto end;
         }
 }while(1);
end:
cout<<"Thank you\n";
return 0;
}
