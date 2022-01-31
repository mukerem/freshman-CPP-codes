
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
struct info//structure name
{
int id;
string name;
int age;
};//object name(variable)
int main()
{
info  data[3];
data[0].id=887;
data[0].name="mukerem";
data[0].age=19;
data[1].id=889;
data[1].name="muleta";
data[1].age=19;
data[2].id=893;
data[2].name="mulugeta";
data[2].age=19;
string file="al rapi.txt";
ofstream rim;
rim.open(file.c_str());
for(int i=0;i<=2;i++)
rim<<data[i].id<<"\t"<<data[i].name<<"\t"<<data[i].age<<endl;
rim.close();
cout<<"the file is found in al rapi";
}
