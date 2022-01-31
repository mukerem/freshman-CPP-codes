#include <iostream>
#include<cmath>
using namespace std;
int main()
{
int n,l;
cout<<"Enter the distance and number of ants respectively\n";
cin>>l>>n;
int ant[n],time[n];
for(int i=0;i<n;i++)
{
cout<<"Enter the distance of ant "<<i+1<<endl;
cin>>ant[i];
if(ant[i]>0)
time[i]=l-ant[i];
else
time[i]=abs(ant[i]);
}
int max=time[0];
for(int i=0;i<n;i++)
{
if(max<=time[i])
max=time[i];
}
cout<<"The maximum time is "<<max;
}
