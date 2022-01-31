#include <bits/stdc++.h>
using namespace std;
void mergesort(int low,int high);
void merging(int low,int mid,int high);
int main()
{
int a[5]={5,3,7,2,1},b[5];
for (int i=0;i<=4;i++)
b[i]=a[i];
mergesort(0,4);
merging(0,2,4);
}
void mergesort(int low,int high)
{
if (low<high)
{
int mid=(low+high)/2;
mergesort(low,mid);
mergesort(mid+1,high);
merging(low,mid,high);
}
}
void merging(int low,int mid,int high,int a[],int b[])
{
int l1,l2,i;
for (l1=low,l2=mid+1,i=low;l1<=mid&&l2<=high;i++)
{
if(a[l1]<a[l2])
b[i]=a[l1+1];
else
b[i]=a[l2++];
}
while(l1<=mid)
    b[i++]=a[l1++];
while(l2<=high)
    b[i++]=a[l2++];
for (int i=low;i<=high;i++)
a[i]=b[i];
}
