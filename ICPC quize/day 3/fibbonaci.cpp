#include <bits/stdc++.h>
using namespace std;
int main()
{
int n, b=1,c=1,d,f=0;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=0;i<n;i++)
{
while(c<a[i])
{
d=c+b;
b=c;
c=d;
f++;
}
if(c!=a[i])
cout<<a[i]-f<<endl;
}}

