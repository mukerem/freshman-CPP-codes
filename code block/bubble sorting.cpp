
#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;
int main()
{
int x[10]={8,7,41,5,6,90,15,42,20,53},temp;
for (int j=0;j<=9;j++)
{
for (int i=9;i>=1;i--)
{
if(x[i]<x[i-1])
{
temp=x[i];
x[i]=x[i-1];
x[i-1]=temp;
}
}
}
for (int i=0;i<=9;i++)
cout<<x[i]<<setw(3);
return 0;
}
