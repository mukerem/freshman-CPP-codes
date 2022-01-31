#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
using namespace std;
int main()
{
int y[10],sum=0;
string z;

string file="x.txt";
ofstream rim;
rim.open(file.c_str());
cout<<"enter 10 numbers"<<endl;
for (int i=0;i<=9;i++)
{
cin>>y[i];
sum=sum+y[i];
}
rim<<"the 10   numbers are ";
for (int i=0;i<=9;i++)
rim<<y[i]<<setw(3);
rim<<" & the  sumation is  "<<sum;
rim.close();
ifstream m;
m.open(file.c_str());
while(m.good())
{
m>>z;
cout<<z<<setw(4);
}
return 0;
}
