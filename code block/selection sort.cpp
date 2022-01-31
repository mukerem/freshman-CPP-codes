#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;
int main()
{
float max,n,x[4]={3.55,3.74,3.2,3.82};
int a;
for(int i=0;i<4;i++)
{
int z=0;
max=x[i];
for(int j=i+1;j<4;j++)
{
if(max<x[j])
{
max=x[j];
a=j;
z++;
}
}
if(z>0)
{
n=x[i];
x[i]=x[a];
x[a]=n;
}
}

for(int i=0;i<4;i++)
cout<<x[i]<<setw(6);
return 0;
}
