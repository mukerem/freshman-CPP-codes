#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
using namespace std;
int main()
{
int y[10],sum=0;
string retrived;
string file="x.txt";
ofstream rim;
rim.open(file.c_str());
for (int i=0;i<=9;i++)
{
cin>>y[i];
sum=sum+y[i];
}
rim<<"the 10 numbers are ";
for (int i=0;i<=9;i++)
rim<<y[i]<<setw(3);
rim<<"  the sumation is "<<sum;
ifstream rm;
rm.open(file.c_str());
if(rm.fail())
{
cout<<"couldnot find file";
exit(1);
}
while(!rm.eof())
{
rm>>retrived;
cout<<retrived;
}
return 0;
}
