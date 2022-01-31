#include <iostream>
#include <fstream>
using namespace std;
int main()
{
string mule="my.txt";
ofstream y;
y.open(mule.c_str());
y<<"my text";
y.close();
ifstream z;
z.open(mule.c_str());
}
