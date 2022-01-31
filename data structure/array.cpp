#include<iostream>
using namespace std;
class Array{
private:
int *A;
int max_size;
int size;
public:
Array(){
A=new int[2];
max_size=2;
size=0;
}
void display();
void add(int num);
void set(int num , int index);
int get(int index);
int search(int item);
void copy ();
};
void Array::display()
{
for(int i=0;i<size;i++)
cout<<A[i]<<"\t";
cout<<endl;
}
void Array :: add(int num)
{
if(size==max_size)
copy();
A[size++]=num;
}
void Array :: set(int num , int index)
{
A[index]=num;
}
int Array :: get(int index)
{
return A[index];
}
int Array :: search(int item)
{
for(int i=0;i<size;i++)
if(A[i]==item)
return i;
return -1;
}
void Array :: copy()
{
int *temp=new int[2*max_size];
for(int i=0;i<size;i++)
temp[i]=A[i];
delete A;
A=temp;
max_size*=2;
}
int main()
{
Array a;
a.add(4);
a.add(7);
a.add(1);
a.add(78);
a.set(0,1);
a.get(1);
a.display();
cout<<a.search(78);
}
s
