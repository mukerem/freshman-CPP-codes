#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
using namespace std;
int main()
{
int sum=0;
int z;
string fil="x.txt";
ifstream m;
m.open(fil.c_str());
while(m.good())
{
m>>z;
sum=sum+z;
}
cout<<sum;
return 0;
}
