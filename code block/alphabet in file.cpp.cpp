#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
using namespace std;
int main()
{
string k;
string file="arapi.txt";
ofstream rim;
rim.open(file.c_str());
for (int i=65;i<=90;i++)
rim<<char(i)<<setw(5)<<static_cast<int>(i)<<endl;
rim.close();
ifstream ri;
ri.open(file.c_str());
while(ri.good())
{
ri>>k;
cout<<k<<setw(5);
}
return 0;
}
