#include<iostream>
using namespace std ;
int main(){
int *x=new int;
int *y;
*x=85;
y=x;
*y=*y+*x;
x=new int;
*x=*y-100;
cout<<*x<<"  "<<*y;
delete x;
cout<<*x<<"  "<<*y;
int *p;
int *q;
p=new int;
q=p;
*p=46;
*q=39;
cout<<*p<<""<<*q
<<endl;

}

