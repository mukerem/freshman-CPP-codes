#include <iostream>
#include <fstream>
using namespace std;
int main()
{

int k;
string gam="magic2.txt";
ifstream commen;
commen.open(gam.c_str());
commen>>k;
cout<<k;

}
