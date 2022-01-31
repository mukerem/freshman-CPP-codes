#include <iostream>
#include <fstream>
#include <iomanip>
#include<cmath>
#include <bits/stdc++.h>
using namespace std;
int main()
{
int x[20],a,b,c,d,l,temp,tem,n;
for(int i=0;i<20;i++)
x[i]=i+1;
cout<<"how many times you convert\n";
cin>>n;
for(int i=0;i<n;i++)
{
cin>>a>>b;
if(a<=b)
{
for(int i=0;i<20;i++)
{
if(x[i]==a)
c=i;
if(x[i]==b)
d=i;
}
}
else
{
for(int i=0;i<20;i++)
{
if(x[i]==b)
c=i;
if(x[i]==a)
d=i;
}
}
if(c>d)
{
tem=c;
c=d;
d=tem;
}
l=(d-c)/2;
for(int i=0;i<=l;i++)
{
temp=x[d-i];
x[d-i]=x[c+i];
x[c+i]=temp;
}
}
for(int i=0;i<20;i++)
cout<<x[i]<<setw(5);
}
