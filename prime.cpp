
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{

int n=1,num;
cin>>num;
int a;
for(int i=0;i<num;i++)
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
