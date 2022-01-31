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
string dep;
}field[4]=
{
{1,"Mike",3.05,{"civil","elec","meng"}},
{2,"Mame",3.74,{"elec","civil","meng"}},
{3,"Muke",3.52,{"elec","civil","meng"}},
{4,"Mube",3.12,{"elec","civil","meng"}}
};
int main()
{
string civil[1],elec[2],meng[1];
string t,te[4];
float temp,max;
for(int i=0;i<=3;i++)
{
int z=0,a=i,x[4];
max=field[i].CGPA;
for(int j=i+1;j<=3;j++)
{
if(max<field[j].CGPA)
{
max=field[j].CGPA;
a=j;
z++;
}
}
x[i]=a;
if(z>0)
{
temp=field[i].CGPA;
field[i].CGPA=field[a].CGPA;
field[a].CGPA=temp;
t=field[i].name;
field[i].name=field[a].name;
field[a].name=t;
for(int k=0;k<3;k++)
{
te[k]=field[i].choise[k];
field[i].choise[k]=field[a].choise[k];
field[a].choise[k]=te[k];
}
}
}
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
if(civil[k]!="Muke"&&civil[k]!="Mame"&&civil[k]!="Mike"&&civil[k]!="Mube")
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
if(elec[k]!="Muke"&&elec[k]!="Mame"&&elec[k]!="Mike"&&elec[k]!="Mube")
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
if(meng[k]!="Muke"&&meng[k]!="Mame"&&meng[k]!="Mike"&&meng[k]!="Mube")
{
meng[k]=field[i].name;
a++;
}
}
}
}
}
}
for(int i=0;i<=3;i++)
{
for(int j=0;j<1;j++)
{
if(field[i].name==civil[j])
field[i].dep="civil";
else if(field[i].name==meng[j])
field[i].dep="meng";
else
field[i].dep="elec";
}
}
int check[4];
for(int i=0;i<=3;i++)
{
for(int j=0;j<3;j++)
{
if(field[i].dep==field[i].choise[j])
check[i]=j+1;
}
}
cout<<"No\t"<<"Name\t"<<"CGPA\t"<<"Field"<<"\t"<<"Choice No"<<endl;
cout<<"----\t"<<"-----\t"<<"-----\t"<<"-----\t"<<"--------"<<endl;
for(int i=0;i<=3;i++)
cout<<i+1<<"\t"<<field[i].name<<"\t"<<field[i].CGPA<<"\t"<<field[i].dep<<"\t   "<<check[i]<<endl;
}
