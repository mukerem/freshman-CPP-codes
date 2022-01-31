#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
int num,n=1;
cout<<"Enter a number\n";
cin>>num;
for(int i=1;i<=num;i++)
{
int x[n];
if(num%i==0)
{
x[n-1]=i;
n++;
}
}
for(int i=0;i<n;i++)
cout<<x[i]<<endl;
}
