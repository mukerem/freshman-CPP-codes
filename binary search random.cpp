#include <bits/stdc++.h>
using namespace std;
int main()
{
int n=10000 ,x[n],left,mid,right,num,z=0;
left=0;
right=n-1;
srand(time(NULL));
for(int i=0;i<n;i++)
x[i]=rand();
for (int j=0;j<n;j++)
{
for (int i=1;i<n;i++)
{
if(x[i]<x[i-1])
swap(x[i],x[i-1]);
}
}
for(int i=0;i<n;i++)
cout<<x[i]<<"\t";
cout<<"enter a number"<<endl;
cin>>num;
while(left<=right)
{
mid=(left+right)/2;
if (num==x[mid])
{
cout<<num<<" is found in x";
z++;
break;
}
else if(num>x[mid])
left=mid+1;
else
right=mid-1;
}
if(z==0)
cout<<num<<" is not found in x";
return 0;
}
