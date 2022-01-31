#include <iostream>
#include<cmath>
using namespace std;
int main()
{
int n,l=0,tot=0,a;
cin>>n;
for(int i=0;i<=n;i++)
{
if(i<=n)
{
a=i;
n=n-i;
}
else
break;
}
cout<<a<<endl<<endl;
for(int i=1;i<a;i++)
cout<<i<<endl;
cout<<a+n;
}
