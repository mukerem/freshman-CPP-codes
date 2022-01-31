#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int n,k,c=0,r=0;
cin>>n>>k;
for(int i=1;i<=11;i++)
{
if(n%10==0)
c++;
else
r++;
n/=10;
if(c==k||n==0)
break;
}
if(n==0)
cout<<c+r-1;
else
cout<<r;
}
