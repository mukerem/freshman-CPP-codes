#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
using namespace std;
int main()
{
string file="aarapi.txt";
ofstream rim;
rim.open(file.c_str());
rim<<"Hello Group 36 Students.This is c++ programming"<<endl;
rim.close();
char ch;
long offset,last;
ifstream in;
in.open(file.c_str());
in.seekg(5L,ios::end);
last=in.tellg();
cout<<last<<endl;
for(offset=5L;offset<=last;offset++)
{
in.seekg(-offset,ios::end);
ch=in.get();
cout<<ch;
}
in.close();
cout<<endl;

}
