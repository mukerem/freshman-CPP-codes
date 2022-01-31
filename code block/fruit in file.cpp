#include <iostream>
#include<fstream>
#include <iomanip>
#include<cmath>
using namespace std;
struct wow
{
int id;
string product;
float price;
}fruit[3]=
{
{1,"orange",3.50,},
{2,"banana",4.50},
{3,"carrot",7.50}
};
int main()
{
string file="ab rapi.txt";
ofstream rim;
rim.open(file.c_str());
rim<<"id\t"<<"product    \t"<<"price"<<endl;
for(int i=0;i<3;i++)
rim<<fruit[i].id<<"\t"<<fruit[i].product<<"\t"<<"\t"<<fruit[i].price<<"\t"<<endl;
cout<<"the file is found in ab rapi";
}

