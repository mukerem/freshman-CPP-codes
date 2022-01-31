#include<iostream>
using namespace std;
int main()
{
int a,b,r,u=0;
cin>>a>>b>>r;
for(int i=a;i>0;i--)
{
if(b/i>=2&&r/i>=4)
{
cout<<7*i;
u++;
break;
}}
if(u==0)
cout<<0;
}
