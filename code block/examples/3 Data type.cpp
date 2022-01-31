//Data type
#include<iostream>
using namespace std;
int main()
{
int a;
char b;
string c;
short int d;
long int e;
unsigned int f;
unsigned short int h;
unsigned long int i;
float j;
double k;
//valid data type
a=100;
b='#*';
c="it is string type";
d=2000;
e=50000;
f=90;
h=2500;
i=410;
j=2.54;
k=12.45;
//invalid data type
a=10.5;
d=32768;
e=10.33;
f=-5;
h=20000;
i=-410;
//display the variables
cout<<a<<b<<c<<d<<f<<h<<i<<j<<k<<i<<j;
}
