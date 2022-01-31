#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int index=0,l=0,r=0,b,c,n;
cin>>n;
int d[n][2];
for(int i=0;i<n;i++)
{
cin>>d[i][0]>>d[i][1];
l+=d[i][0];
r+=d[i][1];
}
b=abs(l-r);
c=b;
for(int i=0;i<n;i++)
{
if(abs(l-r+2*(d[i][1]-d[i][0]))>c)
{
c=abs(l-r+2*(d[i][1]-d[i][0]));
index=i+1;
}}
cout<<index;
}
