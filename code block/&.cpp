#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int a(int[],double,double,double&);
int main()
{
int b[4]={1,4,2,3};
double x,y,z;
cin>>x>>y;
a(b,x,y,z);
cout<<"first"<<x<<endl<<y<<endl<<z<<endl<<b[0]<<endl;
cout<<setprecision(2)<<0.55758;
}
int a(int bb[],double xx,double yy,double& zz)
{
int c;
cout<<xx<<endl<<yy<<endl;
c=bb[0];
bb[0]=bb[1];
bb[1]=c;
c=xx;
xx=yy;
yy=c;
zz=xx+yy;
cout<<bb[0];
int *p;
int *q;
p=new int;
q=p;
*p=46;
*q=39;
cout<<*p<<""<<*q
<<endl;
}
