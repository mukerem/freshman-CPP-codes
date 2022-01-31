#include <iostream>
#include<cmath>
using namespace std;
int main()
{
float ant[3],time[3];
for(int i=0;i<3;i++)
{
cout<<"Enter the distance of ant "<<i+1<<endl;
cin>>ant[i];
}
for(int i=0;i<3;i++)
{
if(ant[i]>=0)
{
time[i]=10-ant[i];
for(int j=0;j<3;j++)
{
if(ant[j]<0&&ant[i]<abs(ant[j]))
time[i]=10-(ant[i]+abs(ant[j]))/2;
}
}
else
{
time[i]=abs(ant[i]);
for(int j=0;j<3;j++)
{
if(ant[j]>0&&ant[j]<abs(ant[i]))
time[i]=10-(ant[j]+abs(ant[i]))/2;
}
}
}
float max=time[0];
for(int i=0;i<3;i++)
{
if(max<=time[i])
max=time[i];
}
cout<<"The maximum time is "<<max;
}
