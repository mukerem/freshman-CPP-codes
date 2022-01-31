#include <iostream>
#include <fstream>
using namespace std;
struct x
{
int a;
char b;
string c;
}y[3];
int main()
{
y[0].a=5;
y[1].b='n';
y[2].c="hello world";
cout<<y[2].c<<endl;
}
