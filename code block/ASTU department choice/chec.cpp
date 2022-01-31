#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;
struct x
{
int id;
string name;
float CGPA;
string choise[3];
}field[4]=
{
{4,"Mube",3.82,{"meng","civil","elec"}},
{2,"mame",3.74,{"civil","meng","elec"}},
{1,"Mike",3.55,{"civil","elec","meng"}},
{3,"Muke",3.2,{"elec","civil","meng"}}
};
int main()
{
string civil[1],elec[2],meng[1];
for(int i=0;i<4;i++)
{
int a=0;
for(int j=0;j<3;j++)
{
if(a==0)
{
if(field[i].choise[j]=="civil")
{
for(int k=0;k<1;k++)
{
if(civil[k]!="muke"&&civil[k]!="mame"&&civil[k]!="mike"&&civil[k]!="mube")
{
civil[k]=field[i].name;
a++;
}
}
}
else if(field[i].choise[j]=="elec")
{
if(a==0)
{
for(int k=0;k<2;k++)
{
if(elec[k]!="muke"&&elec[k]!="mame"&&elec[k]!="mike"&&elec[k]!="mube")
{
elec[k]=field[i].name;
a++;
}
}
}
}
else
{
for(int k=0;k<1;k++)
{
if(meng[k]!="muke"&&meng[k]!="mame"&&meng[k]!="mike"&&meng[k]!="mube")
{
meng[k]=field[i].name;
a++;
}
}
}
}
}
}
cout<<civil[0]<<setw(5)<<elec[0]<<setw(5)<<elec[1]<<setw(5)<<meng[0];
}
