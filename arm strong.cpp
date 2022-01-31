#include <bits/stdc++.h>
using namespace std;
int main()
{
int num,n=1;
cout<<"Enter your number \n";
cin>>num;
for(int i=2;i<=num;i++)
{
int a=0,prime[n];
for(int j=1;j<=i;j++)
{
if(i%j==0)
a++;
}
if(a==2)
{
prime[n-1]=i;
n++;
if(n==2)
