#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;
struct fruit
{
int id;
string name;
float CGPA;
string choise[3];
}field[4]=
{
{1,"Miki",3.82,{"civil","elec","meng"}},
{2,"Mame",3.74,{"civil","meng","elec"}},
{3,"Muke",3.55,{"meng","civil","elec"}},
{4,"Mube",3.2,{"meng","civil","elec"}}
};
int main ()
{
string civil[1],elec[2],meng[1],b,c;
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
if(civil[k]!="miki"&&civil[k]!="mube"&&civil[k]!="muke"&&civil[k]!="mame")
{
civil[k]=field[i].name;
a++;
}
}
}
else if(field[i].choise[j]=="elec")
{
for(int k=0;k<2;k++)
{
if(elec[k]!="miki"&&elec[k]!="mube"&&elec[k]!="muke"&&elec[k]!="mame")
{
elec[k]=field[i].name;
a++;
break;
}
}
}
else
{
for(int k=0;k<1;k++)
{
if(meng[k]!="miki"&&meng[k]!="mube"&&meng[k]!="muke"&&meng[k]!="mame")
{
meng[k]=field[i].name;
a++;
}
}
}
}
}
}
cout<<civil[0]<<elec[0]<<elec[1]<<meng[0];
}
