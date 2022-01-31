/*=======GROUP MEMBERS ========
  =========GROUP 11==============
1) Mukerem Ali ------------R/0887/08
2) Mohammed Johar ---------R/0877/08
3) Muluken fikre-----------R/0895/08
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void insert();
void add_and_display();
struct polynomial
{
int degree;
float cof;
polynomial *next;
};
polynomial *head=NULL,*root=NULL,*index,*head2=NULL;
int main()
{
insert();
add_and_display();
return 0;
}
void insert()
{
cout<<"\t\t aX^b   where: a   is coefficient\n\t\t\t\tb   is power\n \n\n";
cout<<"NB:   if you  want to stop insert polynomial press -1  \n ";
cout<<" \t   the degree of constant number is \n";
cout<<"\n\n\n";
system("pause");
system("cls");
cout<<"insert the degree and coefficient  of first polynomial \n \n\n";
for (int i=0;;i++)
{
polynomial *poly1=new polynomial();
index=head ;
cout<<"degree:";
cin>>poly1->degree;
poly1->next=NULL;
if(poly1->degree==-1)
break;
while(poly1->degree<-1)
{
cout<<"It is invalid degree of polynomial\n";
cin>>poly1->degree;
poly1->next=NULL;
}
cout<<"coefficient X^"<<poly1->degree<<":";
cin>>poly1->cof;
while(poly1->cof==0)
{
cout<<"It is invalid coefficient :";
cin>>poly1->cof;
}
if(head==NULL)
head=poly1;
else
{
if(head->degree<poly1->degree)
{
poly1->next=head;
head=poly1;
}
else
for(int i=0;;i++)
{
if(index->degree==poly1->degree)
{
index->cof+=poly1->cof;
break;
}
else if(index->next==NULL)
{
index->next=poly1;
break;
}
else if(index->next->degree<poly1->degree&&index->degree>poly1->degree)
{
poly1->next=index->next;
index->next=poly1;
break;
}
else
index=index->next;
i++;
}}}
system("cls");
cout<<"\n\ninsert the degree and coefficient  of second polynomial \n ";
cout<<"\n\n\n";
for (int i=0;;i++)
{
polynomial *poly2=new polynomial() ;
index=head2 ;
cout<<"degree :";
cin>>poly2->degree;
poly2->next=NULL;
if(poly2->degree==-1)
break;
while(poly2->degree<-1)
{
cout<<"It is invalid degree of polynomial\n";
cin>>poly2->degree;
poly2->next=NULL;
}
cout<<"coefficient of x^"<<poly2->degree<<":";
cin>>poly2->cof;
while(poly2->cof==0)
{
cout<<"It is invalid coefficient :\n";
cin>>poly2->cof;
}
index=head2;
if(head2==NULL)
head2=poly2;
else
{
if(head2->degree<poly2->degree)
{
poly2->next=head2;
head2=poly2;
}
else
for(int i=0;;i++)
{
if(index->degree==poly2->degree)
{
index->cof+=poly2->cof;
break;
}
else if(index->next==NULL)
{
index->next=poly2;
break;
}
else if(index->next->degree<poly2->degree&&index->degree>poly2->degree)
{
poly2->next=index->next;
index->next=poly2;
break;
}
else
index=index->next;
i++;
}}}}
void add_and_display()
{
polynomial *temp,*temp1=head,*temp2=head2,*key=head2;
system("cls");
cout<<"\n\v\n\t\t\t";
//display both polynomials
do
{
    cout <<temp1->cof;
    if(temp1->degree>1)
    {
     cout<<"X^"<<temp1->degree;
         if(temp1->next!=NULL)
          cout<<" + ";
     }
       temp1=temp1->next;
     }while (temp1->next!=NULL);
    cout <<temp1->cof;
    if(temp1->degree>1)
     cout<<"X^"<<temp1->degree;
cout<<"\n\t\t+\n\t\t\t";
do
{
    cout <<temp2->cof;
    if(temp2->degree>1)
    {
     cout<<"X^"<<temp2->degree;
         if(temp2->next!=NULL)
          cout<<" + ";
     }
       temp2=temp2->next;
     }while (temp2->next!=NULL);
    cout <<temp2->cof;
    if(temp2->degree>1)
     cout<<"X^"<<temp2->degree;
cout<<"\n\n\t\t";
int sum, first=max(head->degree,head2->degree);
cout<<"========================\n\n\t\t\t";
for(int i=first;i>=0;i--)
{
sum=0;
temp=head;
while(temp->next!=NULL)
{
if(i==temp->degree)
sum+=temp->cof;
temp=temp->next;
}
if(i==temp->degree)
sum+=temp->cof;
temp=temp->next;
temp=head2;
while(temp->next!=NULL)
{
if(i==temp->degree)
sum+=temp->cof;
temp=temp->next;
}
if(i==temp->degree)
sum+=temp->cof;
temp=temp->next;
if(sum!=0)
{
    if(sum!=1||i!=0)
    cout <<sum;
    if(i>1)
    {
     cout<<"X^"<<i<<" + ";
     }}}
cout<<"\n\n\t\t\t";

}


