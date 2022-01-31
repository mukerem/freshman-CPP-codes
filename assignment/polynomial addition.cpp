#include<iostream>
using namespace std;
void insert();
void add_and_display();
struct addition
{
int degree;
float cof;
addition *next;
};
addition *head=NULL,*head2=NULL,*last;
int leading=0;
int main()
{
insert();
add_and_display();
}
void insert()
{
cout<<"insert the degree and coefficient  of first polynomial \n ";
cout<<"if you  want to stop insert polynomial press -1 to \n ";
cout<<"\n\n\n";
for (int i=0;;i++)
{
addition *poly1=new addition() ;
cout<<"Enter degree of polynomial:";
cin>>poly1->degree;
if(poly1->degree==-1)
break;
cout<<"Enter coefficient of degree  "<<poly1->degree<<":";
cin>>poly1->cof;
if(head==NULL)
{
poly1->next=NULL;
head=poly1;
last=poly1;
}
else
{
last->next=poly1;
poly1->next=NULL;
last=last->next;
}}
cout<<"\n\nEnter the degree and coefficient of 2nd polynomial\n";
cout<<"=====================================================\n\n\n";
for (int i=0;;i++)
{
addition *poly2=new addition() ;
cout<<"Enter degree of polynomial:";
cin>>poly2->degree;
leading=max(leading,poly2->degree);
if(poly2->degree==-1)
break;
cout<<"Enter coefficient of degree  "<<poly2->degree<<":";
cin>>poly2->cof;
if(head2==NULL)
{
poly2->next=NULL;
head2=poly2;
last=poly2;
}
else
{
last->next=poly2;
poly2->next=NULL;
last=last->next;
}}}
void add_and_display()
{
cout<<"\vThe summation of the polynomial is \n\n\t ";
for(int i=leading;i>=0;i--)
{
addition *temp=head,*temp2=head2;
int cofficient=0;
if(temp!=NULL)
do
{
if(temp->degree==i)
cofficient+=temp->cof;
temp=temp->next;
}
while (temp!=NULL);
if(temp2!=NULL)
do
{
if(temp2->degree==i)
cofficient+=temp2->cof;
temp2=temp2->next;
}
while (temp2!=NULL);
if(cofficient!=0)
{
    cout <<cofficient;
    if(i>0)
    {
     cout<<"X";
         if(i>1)
          cout<<"^"<<i;
         // if(temp2->next!=NULL)
          cout<<" + ";
     }}}
cout<<"\n\n";
}

