#include<iostream>
using namespace std;
int main()
{
int n,k,c=0,f,d[500];
cin>>n>>k;
for(int i=0;i<n;i++)
cin>>d[i];
for(int i=1;i<n-1;i++)
{
f=max(k-(d[i]+d[i+1]),k-(d[i]+d[i-1]));
if(f>0)
{
c+=f;
d[i]+=f;
}}
cout<<c<<endl;
for(int i=0;i<n;i++)
cout<<d[i]<<"\t";
}
