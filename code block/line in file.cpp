#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
using namespace std;
int main()
{
int n;
string file="arapi.txt";
ofstream rim;
rim.open(file.c_str());
string line;
cout<<"enter the number of line"<<endl;
cin>>n;
for (int i=0;i<n;i++)
{
getline(cin,line);
rim<<line<<endl;
}
cout<<"the file is found in arapi";
}
