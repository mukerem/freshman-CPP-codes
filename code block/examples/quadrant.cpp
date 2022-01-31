#include<iostream>
using namespace std;
int main()
{
int a;
cout<<"enter a number\n";
cin>>a;
a=a%360;
if(a%90==0)
cout<<"it is an axis\n";
else if (a<90 )
cout<<"it is first quadrant\n";
else if(a>90&&a<180)
cout<<"it is second quadrant\n";
else if(a>180&&a<270)
cout<<"it is third quadrant\n";
else
cout<<"it is forth quadrant\n";
}
