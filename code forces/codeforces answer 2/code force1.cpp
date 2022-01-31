#include<iostream>
using namespace std;
int main()
{
long n,a;
cin>>n;
cout<<2<<endl;
for(int i=2;i<=n+1;i++)
{
for(int j=2;j<=i;j++)
{
if(i%j==0)
{
a=j;
break;
}}
if(i==a)
cout<<2<<" ";
else
cout<<1<<" ";
}
}

