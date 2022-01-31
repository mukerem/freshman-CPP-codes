#include <iostream>
using namespace std;
void HeapifyDown(int A[],int i,int n)
{
int max,l=2*i+1,r=2*i+2;
if(l>=n&&r>=n)
    return ;
if(r>=n)
    max=l;
else
max=A[l]>A[r]?l:r;
if(A[i]<A[max])
swap(A[max],A[i]);
}

void HeapifyUp(int A[],int i)
{
int p=(i-1)/2;
if(i==0)
    return ;
else
{
if(A[i]>A[p]){
    swap(A[i],A[p]);
    HeapifyUp(A,p);
}
}
}
void HeapSort(int A[],int n){
for(int i=0;i<n;i++)
HeapifyUp(A,i);
  int s=n;
  while(s>0){
    swap(A[0],A[--s]);
    HeapifyDown(A,0,s);
  }
}

int main()
{
   int A[5]={4,7,2,-1,6};

HeapSort(A,5);
for(int i=0;i<5;i++)
cout<<A[i]<<"\t";
}

