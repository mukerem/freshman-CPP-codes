#include<iostream>
using namespace std;
int s[100000];
int main()
{
int n,c=0,a,b=0,k=0;
cin>>n;
for(int i=0;i<2*n;i++)
{
cin>>s[i];
a=0;
for(int j=0;j<i;j++)
{
if(s[j]==s[i])
{
a++;
break;
}}
if(a==0)
c++;
else
b++;
k=max(k,c-b);
}
cout<<k;
}
