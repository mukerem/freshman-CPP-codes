#include <iostream>
using namespace std;

template <class T>
class Array
{
private:
int MaxSize;
T  *A;
int Size;
public:
	// constructor creates the array
DynamicArray ()
{
MaxSize = 20;
Size = 0;
A=new T[MaxSize];
}
// constructor creates the array with size specified
DynamicArray (int sz)
{
MaxSize = sz;
Size = 0;
A=new T[MaxSize];
}

void display();
void add(T element);
void set(int index, T element);
T get(int index);
int find(T element);
};
//method implementation
void Array :: display()
{
int i;
for(i = 0; i < Size; i++)
cout << A[i] << "\t";
cout << endl;
}
template <class T>
void Array :: add(T element)
{
A[Size++]=element;
}

template <class T>
void Array :: set(int index, T element)
{
A[index]=element;
}
template <class T>
T  Array :: get(int index)
{
return A[index];
}
template <class T>
int Array :: find(T element)
{
for(i = 0; i < Size; i++)
if( A[i] == element)
		return i;
return -1;
}

//main method for testing
int main()
{
	DynamicGenericArray<int> a(100); //creates an integer array size 100
	a.add(18); a.add(34); a.add(45);
	a.set(5,6);
a.display();

}

