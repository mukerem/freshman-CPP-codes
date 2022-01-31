#include <bits/stdc++.h>
using namespace std;
int main()
{
int a,b,max=0,step,d;
cin>>a>>b;
for(int i=a;i<=b;i++)
{
d=i;
step=1;
while(d>1)
{
if(d%2==0)
d/=2;
else
d=d*3+1;
step++;
}
if(step>max)
max=step;
}
cout<<max;
}
