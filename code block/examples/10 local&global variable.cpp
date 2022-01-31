#include<iostream>
using namespace std;
int x=4;//global variable
int main()
{
int x=6;//local variable
cout<<x<<endl;//display local variable
cout<<::x<<endl;//display global variable
}
