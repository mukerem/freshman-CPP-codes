
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
struct info//structure name
{
int id;
string name;
int age;
}data[3]=//object name(variable)
{
{887,"Mukerem",19},{889,"Mulata",19},{893,"Mulugeta",19}
};
int main()
{
string file="al rapi.txt";
ofstream rim;
rim.open(file.c_str());
for(int i=0;i<=2;i++)
rim<<data[i].id<<"\t"<<data[i].name<<"\t"<<data[i].age<<endl;
rim.close();
cout<<"the file is found in al rapi";
}
