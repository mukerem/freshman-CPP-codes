#include<iostream>
#include<algorithm>
using namespace std;
void HeapifyUp(int A[] ,int i)
{
int p=(i-1)/2;
if(i!=0&&A[i]>A[p])
{
swap(A[i],A[p]);
HeapifyUp(A,p);
}
}
void HeapifyDown(int A[] , int i , int n)
{
int max,l=2*i+1,r=2*i+2;
if(l>=n&&r>=n)
return ;
else if(r>=n)
max=l;
else
max=A[l]>A[r]?l:r;
if(A[max]>A[i]){
swap(A[max],A[i]);
HeapifyDown(A,max,n);
}
}
void HeapSort(int A[] , int n)
{
for(int i=0;i<n;i++)
HeapifyUp(A,i);
for(int i=0 ; i<n; i++)
cout<<A[i]<<" \t ";
cout<<endl;
int s=n;
while(s>0)
{
swap(A[0],A[--s]);
HeapifyDown(A,0,s);
for(int i=0 ; i<n; i++)
cout<<A[i]<<" \t ";
cout<<endl;
}}
int main()
{
int A[]={4,7,2,0,1,5,6,9};
HeapSort(A,8);
for(int i=0 ; i<sizeof(A)/sizeof(A[0]); i++)
cout<<A[i]<<" \t ";
}
