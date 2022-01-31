#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,s,l,p,r[30],b=0;
cin>>n;
for(int i=0;i<n;i++)
{
cin>>p;
long long sum=0;
for(int j=0;j<p;j++)
{
cin>>s>>l;
for(int k=29-s;k>29-s-l;k--)
{
if(l==3)
{
k--;
continue;
}
int u=0;
for(int l=0;l<b;l++)
{
if(r[l]==k)
{
u++;
break;
}
}
if(u==0)
{
sum+=pow(2,k);
r[b++]=k;
}
}
}
cout<<sum<<endl;
}
}
