//increment &decrement
#include<iostream>
using namespace std;
int main()
{
float x=6,y=13,k,v,z;
z=x+y;
z=11.5;
k=--x;//first x=x-1 then k=x
v=y++;//first v=y then y=y+1
cout<<k++<<endl;//first display k then k=k+1
cout<<--v<<endl;//first v=v-1 then display v
cout<<k<<endl;
cout<<y<<endl;
cout<<v<<endl<<z<<endl;
}
