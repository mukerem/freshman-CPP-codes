#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,s,l,p;
cin>>n;
for(int i=0;i<n;i++)
{
cin>>p;
long long sum=0;
for(int j=0;j<p;j++)
{
cin>>s>>l;
for(int k=29-s;k>29-s-l;k--)
sum+=pow(2,k);
}
cout<<sum<<endl;
}
}
