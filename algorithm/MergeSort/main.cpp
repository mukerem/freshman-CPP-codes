#include<iostream>

using namespace std;
void mergeSort(int,int);
void merging(int,int,int);
int a[10]={4,3,1,0,7,2,3,2,7,3};
int b[10];
int main()
{
    mergeSort(0,9);
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<",";
    }
    return 0;
}
void mergeSort(int low,int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        mergeSort(low,mid);
        mergeSort(mid+1,high);
        merging(low,mid,high);
    }

}
void merging(int low,int mid, int high)
{
    int l1,l2,i;
   for(l1=low,l2=mid+1,i=low; l1<=mid && l2<=high ; i++)
   {
       if(a[l1]<a[l2])
       {
            b[i]=a[l1++];
       }
       else
       {
            b[i]=a[l2++];
       }
   }
   while(l1<=mid)
   {
       b[i++]=a[l1++];
   }
    while(l2<=high)
   {
       b[i++]=a[l2++];
   }
   for(int i=low;i<=high;i++)
   {
       a[i]=b[i];
   }
}

