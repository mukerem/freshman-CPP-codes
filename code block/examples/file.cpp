#include <iostream>
#include <fstream>
using namespace std;
int main()
{

string c,a="rapi.txt";
ofstream d;
d.open(a.c_str());
d<<"this is c++ programming language";
d.close();
ifstream b;
b.open(a.c_str());
while(b.good())
{
b>>c;
cout<<c<<"\t";
}
b.close();
return 0;
}
