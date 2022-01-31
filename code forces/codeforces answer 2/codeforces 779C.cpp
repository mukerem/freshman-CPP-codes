#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int n,k,b[3]={0,0,0};
cin>>n>>k;
b[k]=1;
for(int i=n;i>=1;i--)
{
if(i%2==0&&(b[1]!=b[2]))
swap(b[1],b[2]);
if(i%2==1&&(b[1]!=b[0]))
swap(b[1],b[0]);
}
for(int i=0;i<3;i++)
{
if(b[i]==1)
{
cout<<i;
break;
}}}
