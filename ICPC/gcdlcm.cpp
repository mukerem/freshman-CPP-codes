#include <bits/stdc++.h>
using namespace std;
int main()
{
long int n,m,min,gcd,lcm;
cin>>n>>m;
if(n<m)
min=n;
while(min>0)
{
if(n%min==0&&m%min==0)
{
gcd=min;
break;
}
min--;
}
lcm=n*m/gcd;
cout<<gcd<<" "<<lcm;
}
