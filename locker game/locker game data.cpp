#include <iostream>
#include<fstream>
#include<cmath>
using namespace std;
int main()
{
string file="my password.txt";
ofstream muke;
muke.open(file.c_str());
muke<<1892;
muke.close();
}
