#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
long n=1,a;
for(long i=2;i<=pow(10,15);i++)
{
int prime[n];
for(long j=2;j<=i;j++)
{
if(i%j==0)
{
a=j;
break;
}}
if(i==a)
{
prime[n-1]=i;
n++;
cout<<prime[n-2]<<"\t";
}
}
}
