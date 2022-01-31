#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,m,d=0;
cin>>n>>m;
for(int i=0;i<n;i++)
{
if(m*i/n==m*(i+1)/n)
d++;
else
d+=2;
}
cout<<d;
}

