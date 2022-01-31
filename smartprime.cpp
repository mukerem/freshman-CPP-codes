#include<iostream>
using namespace std;
int main()

{
int n,d,a=0;
cin>>n;
int k[n];
for(int i=0;i<n;i++)
cin>>k[i];
for(int i=0;i<n;i++)
{
for(int j=2;j<=k[i];j++)
{
if(k[i]%j==0)
{
a=j;
break;
}}
cout<<"Input value: "<<k[i]<<endl;
if(k[i]==a)
cout<<"Would you believe it; it is a prime!"<<endl<<endl;
else
{
for(int l=1;l<10000;l++)
{
d=k[i]+l;
for(int j=2;j<=d;j++)
{
if(d%j==0)
{
a=j;
break;
}}
if(d==a)
{
cout<<"Missed it by that much ("<<d-k[i]<<")! "<<endl<<endl;
break;
}
d=k[i]-l;
for(long j=2;j<=d;j++)
{
if(d%j==0)
{
a=j;
break;
}}
if(d==a)
{
cout<<"Missed it by that much ("<<k[i]-d<<")! "<<endl<<endl;
break;
}
}
}}}
