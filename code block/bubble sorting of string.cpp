#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;
int main()
{
int n;
cout<<"enter the size of the list"<<endl;
cin>>n;
string x[n],temp;
cout<<"enter "<<n<<" strings  randomly "<<endl;
for (int i=0;i<n;i++)
cin>>x[i];
cout<<"before sorting "<<endl;
for (int i=0;i<n;i++)
cout<<x[i]<<setw(10);
cout<<endl;
for (int j=0;j<n;j++)
{
for (int i=1;i<=n-1;i++)
{

if(x[i]<x[i-1])
{
temp=x[i];
x[i]=x[i-1];
x[i-1]=temp;
}
}
}
cout<<"after sorting "<<endl;
for (int i=0;i<n;i++)
cout<<x[i]<<setw(10);
return 0;
}

