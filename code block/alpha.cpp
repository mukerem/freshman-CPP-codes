#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
using namespace std;
int main()
{
string file="arapi.txt";
ofstream rim;
rim.open(file.c_str());
for (int i=65;i<=90;i++)
rim<<char(i)<<setw(5)<<static_cast<int>(i)<<endl;
cout<<"the file is found in arapi";
return 0;
}
