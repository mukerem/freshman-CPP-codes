#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
using namespace std;
int main()
{
int y[10],n,a=0;
int retrived;
string file="aa.txt";
ofstream rim;
rim.open(file.c_str());
cout<<"ente 5 numbers "<<endl;
for (int i=0;i<=4;i++)
{
cin>>y[i];
rim<<y[i]<<setw(3);
}
rim.close();
cout<<"enter the checked number"<<endl;
cin>>n;
ifstream rapi;
rapi.open(file.c_str());
while(!rapi.eof())
{
rapi>>retrived;
if(n==retrived)
{
cout<<n<<"the is found in the file";
a++;
}
}
if(a==0)
cout<<n<<" the is not found in the file";
}

