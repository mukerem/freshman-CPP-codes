#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,d,t,mid;
cin>>n;
for(int i=0;i<n;i++)
{
cin>>d>>t;
int a[t],b[t];
string c[t];
for(int j=0;j<t;j++)
{
cin>>c[j]>>a[j];
b[j]=a[j];
}
sort(a,a+t);
mid=t/2;
for(int j=0;j<t;j++)
{
if(b[j]==a[mid])
{
if(a[mid]>d)
cout<<"The challenger will face "<<c[j]<<": The challenger loses.\n";
else
cout<<"The challenger will face "<<c[j]<<": The challenger wins!\n";
break;
}
}
}
}
