#include <bits/stdc++.h>
using namespace std;
int main()
{
long int n,k,d=1,m=1,r,type;
cin>>n>>k;
while(n<k||n>30)
{
cout<<"invalid input enter another number\n";
cin>>n>>k;
}
r=n-k;
for(int i=n;i>k;i--)
d*=i;
for(int i=1;i<=r;i++)
m*=i;
type=d/m;
cout<<"the total dish is "<<type;
}
