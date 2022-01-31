#include <iostream>

using namespace std;
int intArray[7]={4,6,3,2,1,9,7};
void Swap(int num1,int num2)
{
    int temp=intArray[num1];
    intArray[num1]=intArray[num2];
    intArray[num2]=temp;
}
int Partition(int left,int right,int pivot)
{
    int leftPointer=left-1;
    int rightPointer=right;
    while(true)
    {
        while(intArray[++leftPointer]<pivot)
        {
            //do nothing
        }
        while(rightPointer>0 && intArray[--rightPointer]>pivot)
        {
            //do nothing
        }
        if(leftPointer>=rightPointer)
            break;
        else
        {
         Swap(leftPointer,rightPointer);
        }
    }
    Swap(leftPointer,right);
    return leftPointer;
}
void quicksort(int left,int right)
{
    if(left>=right)
        return;
    else
    {
        int pivot=intArray[right];
        int partitionPoint=Partition(left,right,pivot);
        quicksort(left,partitionPoint-1);
        quicksort(partitionPoint+1,right);
    }
}


int main()
{
   quicksort(0,6) ;
   for(int i=0;i<7;i++)
    cout<<intArray[i]<<",";
    return 0;
}
