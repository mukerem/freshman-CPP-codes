#include <iostream>
#include <fstream>
using namespace std;
int main()
{
string paper;
string game="magic2.txt";
ofstream share;
share.open(game.c_str());
share<<1;
share.close();
}
