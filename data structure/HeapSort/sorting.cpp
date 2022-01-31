#include <iostream>
using namespace std;
int main()
{
Heap h;
int A[5]={4,7,2,-1,6};

for(int i=0;i<5;i++)
h.insert(A[i]);
for(int i=0;i<5;i++)
cout<<A[i]<<"\t";
}

