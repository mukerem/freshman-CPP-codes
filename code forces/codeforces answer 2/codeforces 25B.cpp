#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int n,d,k;
cin>>k>>n;
while(n>0)
{
d=pow(10,k-2);
cout<<n/k;
if(k>3)
cout<<"-";
n=n%d;
k-=2;
}
}
