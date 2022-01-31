#include<bits/stdc++.h>
using namespace std;
int main()
{
int num,n,total=0;
cout<<"Enter the number of lockers\n";
cin>>num;
for(int i=0;i<1;i++)
{
cout<<"How many lockers open\n";
cin>>n;
if(n>num)
{
cout<<"It is invalid locker number try again\n";
i--;
}
}
int open[n],found[num];
cout<<"Enter the open lockers\n";
for(int i=0;i<n;i++)
{
cin>>open[i];
if(open[i]>num)
{
cout<<"It is invalid locker number try again\n";
i--;
}
}
for(int i=1;i<=num;i++)
{
int m=0;
for(int j=0;j<total;j++)
{
if(i%found[j]==0)
m++;
}
if(m%2==0)
{
for(int j=0;j<n;j++)
{
if(i==open[j])
{
found[total]=i;
total++;
}
}
}
else
{
int k=0;
for(int j=0;j<n;j++)
{
if(i==open[j])
k++;
}
if(k==0)
{
found[total]=i;
total++;
}
}
}
cout<<total<<" persons exit and "<<num-total<<" persons does not exit\n";
for(int j=0;j<total;j++)
cout<<found[j]<<setw(4)<" was exist";
}
