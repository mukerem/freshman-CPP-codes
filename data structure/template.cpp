#include<bits/stdc++.h>
using namespace std;
template <class T>
class Array{
private:
T *A;
int max_size;
int size;
public:
Array(){
A=new T[2];
max_size=2;
size=0;
}/*
void display();
void add(T num);
void set(T num , int index);
int get(int index);
int search(T item);
void copy ();
};*/
void display()
{
for(int i=0;i<size;i++)
cout<<A[i]<<"\t";
cout<<endl;
}
void  add(T num)
{
if(size==max_size)
copy();
A[size++]=num;
}
void  set(T num , int index)
{
A[index]=num;
}
T  get(int index)
{
return A[index];
}
T  search(T item)
{
for(int i=0;i<size;i++)
if(A[i]==item)
return i;
return -1;
}
void copy()
{
T *temp=new T[2*max_size];
for(int i=0;i<size;i++)
temp[i]=A[i];
delete A;
A=temp;
max_size*=2;
}};
int main()
{
Array<char> b;
b.add('a');
b.add('w');
b.add('g');
b.add('u');
b.set('p',0);
b.get(1);
b.display();
cout<<b.search('l')<<endl;
Array <int> a;
a.add(4);
a.add(7);
a.add(1);
a.add(78);
a.set(0,1);
a.get(1);
a.display();
cout<<a.search(8);
}


