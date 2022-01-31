#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;
int main()
{
int last;
string k;
string file="rap.txt";
ofstream rim;
rim.open(file.c_str());
rim<<"mukerem ali liver pool ";
rim.close();
ifstream ri;
ri.open(file.c_str());
while(ri.good())
{
ri>>k;
cout<<k<<setw(5);
}
char kk;
ri.seekg(0L,ios::end);
last=ri.tellg();
cout<<last;
for(int i=0L;i<10;i++)
{
ri.seekg(3L,ios::beg);
kk=ri.get();
cout<<kk<<endl;
}
ri.close();
return 0;
}
