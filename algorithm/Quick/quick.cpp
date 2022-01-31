#include<iostream>
using namespace std;
int quick(int [],int,int);
int part(int [],int,int);
int main()
{
int a[]={5,8,3,0,9,7};
quick(a,0,5);
for (int i=0;i<6;i++)
cout<<a[i]<<"\t";
}
int quick(int set[],int start,int end)
{
int pivot;
if(start<end)
{
pivot=part(set,start,end);
quick(set,start,pivot-1);
quick(set,pivot+1,end);
}}
int part(int set [],int start,int end)
{
int index=start,scan,mid;
mid=(start+end)/2;
swap(set[mid],set[start]);
for (scan=start+1;scan<=end;scan++)
if(set[scan]<set[start])
swap(set[scan],set[++index]);
swap(set[start],set[index]);
return index;
}
