#include<iostream>
#include<fstream>
using namespace std;
int main()
{
int *x,*y;
int c[5]={1,2,3,4,5};
x=c;
y=&c[3];
*x=c[1]+c[2];
cout<<c[0];
x++;
y=x;
*y=10;
cout<<*x;
}
