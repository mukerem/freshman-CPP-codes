#include<iostream>
using namespace std;
int a[100],b[100];
int main()
{
int  n,r=0,u=0;
cin>>n;
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=0;i<n;i++)
cin>>b[i];
for(int i=1;i<=5;i++)
{
int c=0,d=0;
for(int k=0;k<n;k++)
{
if(a[k]==i)
c++;
if(b[k]==i)
d++;
}
if((c+d)%2!=0)
{
cout<<-1;
u++;
break;
}
else
{
if(c>d)
r+=(c-d)/2;
}}
if(u==0)
cout<<r;
}
