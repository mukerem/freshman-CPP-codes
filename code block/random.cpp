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
int x,last;
char ch;
cout<<"enter a number"<<endl;
cin>>x;
ifstream ri;
ri.open(file.c_str());
for(int i=x;i<=ios::end;i++)
{
ri.seekg(i,ios::beg);
ch=ri.get();
cout<<ch;
}
}
