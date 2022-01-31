#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
float r,r1,s,s1,c;
int n;
cin>>n;
double arr[n];
for(int i=0;i<n;i++)
{
cin>>r>>s;
r1=1/r;
s1=1/s;
c=1/(s1+r1+2*sqrt(s1*r1));
arr[i]=c;
}
for(int i=0;i<n;i++)
cout<<"Circle Problem #"<<i+1<<": Radius of the small circle = "<<fixed<<setprecision(2)<<arr[i]<<endl;
}

