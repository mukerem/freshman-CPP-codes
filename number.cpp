#include<bits/stdc++.h>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
long n=1,a;
cout<<"Prime numbers less than or equal to "<<pow(10,15)<<endl;
for(long i=2;i<=pow(10,15);i++)
{
long prime[n];
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
if(n%100==0)
{
for(int k=n-100;k<n;k++)
cout<<prime[k]<<setw(4);
system("pause");
system("cls");
}}}}

