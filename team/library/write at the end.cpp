#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ofstream a;
a.open("file.txt", ios::app);
a<<"\nHello%% world";
//system("PUASE");
}
