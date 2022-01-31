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
double x;
string word;
cout<<"enter a number"<<endl;
cin>>x;
ifstream ri;
ri.open(file.c_str());
ri.seekg(xL,ios::beg);
word=ri.get();
cout<<word;

}
