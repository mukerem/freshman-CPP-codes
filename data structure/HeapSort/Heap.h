#ifndef HEAP_H
#define HEAP_H


class Heap
{
    private:
    int A[100];
    int size;
    public:
    Heap()
    {
    size=0;
    }
     void insert(int item)
     {
      A[size++]=item;
      heapiifyUp(size-1);

     }
     int delet()
     {
     int item=A[0];
     A[0]=A[size--];
     return item;
     }
    private:
    void heapifyUp(int i)
    {

    }
   void heapifyDoen(int i)
    {

    }


};

#endif // HEAP_H
