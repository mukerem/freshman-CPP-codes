#ifndef Array22_H
#define Array22_H
#include<iostream>
using namespace std;
class Array2
{
private:
int MaxSize;
int A[20];
int Size;
public:
	// constructor creates the Array2
Array2()
{
MaxSize = 20;
Size = 0;
}
void display();
void add(int element);
void set(int index, int element);
int get(int index);
int find(int element);
};
//method implementation
void Array2 :: display()
{
int i;
for(i = 0; i < Size; i++)
cout << A[i] << "\t";
cout << endl;
}
void Array2 :: add(int element)
{
A[Size++]=element;
}


void Array2 :: set(int index, int element)
{
A[index]=element;
}
int Array2 :: get(int index)
{
return A[index];
}
int Array2 :: find(int element)
{
for(int i = 0; i < Size; i++)
if( A[i] == element)
		return i;
return -1;
}

/*
class Array22
{
    public:
        Array22();

    protected:

    private:
};
*/
#endif // Array22_H
