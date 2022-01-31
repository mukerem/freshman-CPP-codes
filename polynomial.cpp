#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
int n;
cout<<"Enter the power of leading coefficient\n";
cin>>n;

int x[n+1];
for(int i=0;i<=n;i++)
{
if(i<n)
cout<<"X";
if(i<n-1)
cout<<"^"<<n-i<<setw(3);
}
for(int i=0;i<=n;i++)
cin>>x[n-i];
for(int i=0;i<=n;i++)
{
if(x[n-i]!=0)
{
if(x[n-i]!=1)
cout<<x[n-i];
if(i<n)
cout<<"X";
if(i<n-1)
cout<<"^"<<n-i;
if(x[n-i-1]>0&&i<n)
cout<<"+";
}
}
}
