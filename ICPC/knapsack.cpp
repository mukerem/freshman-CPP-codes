#include <bits/stdc++.h>
using namespace std;
int main()
{
int num[2][100],n,w,a,max,tot=0,mass=0,z;
cin>>n>>w;
for(int i=0;i<n;i++)
cin>>num[0][i]>>num[1][i];
for(int i=0;i<n;i++)
{
z=0;
max=num[1][i];
for(int j=i+1;j<n;j++)
{
if(max<num[1][j])
{
max=num[1][j];
a=j;
z++;
}}
if(z>0)
{
swap(num[0][i],num[0][a]);
swap(num[1][i],num[1][a]);
}}
for(int i=0;i<n;i++)
if(mass+num[0][i]<=w)
{
mass+=num[0][i];
tot+=num[1][i];
}
cout<<tot;
}
