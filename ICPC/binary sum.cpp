#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,digit,m,min;
cin>>n;
while(n>0)
{
for(int i=0;i<20;i++)
if(pow(10,i)<=n&&n<pow(10,i+1))
{
digit=i;
break;
}
m=0;
while(digit>=0)
{
if(m+pow(10,digit)<=n)
m+=pow(10,digit);
digit--;
}
cout<<m<<"\t";
n-=m;
}}
