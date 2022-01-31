#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
string file="my password.txt";
ofstream club;
club.open(file.c_str());
club<<1892;
int num,play;
string name;
ofstream life("life.txt");
life<<"Academic "<<3<<" "<<4;
life.close();
ifstream  data("life.txt");
while(data >> name >>num>>play)
if(name=="Academic")
cout<<name<<"\t\t"<<num<<"\t\t"<<play<<endl;
}
