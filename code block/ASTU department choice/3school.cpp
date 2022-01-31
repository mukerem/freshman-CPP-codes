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
{1,"Mike",3.85,{"civil","elec","meng"}},
{2,"Mame",3.74,{"meng","civil","elec"}},
{3,"Muke",3.62,{"elec","civil","meng"}},
{4,"Mube",3.72,{"meng","civil","elec"}}
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
int b=0;
for(int z=0;z<4;z++)
{
if(civil[k]==field[z].name)
b++;
}
if(b==0)
civil[k]=field[i].name;
}
}
else if(field[i].choise[j]=="elec")
{
for(int k=0;k<2;k++)
{
int b=0;
for(int z=0;z<4;z++)
{
if(elec[k]==field[z].name)
b++;
}
if(b==0)
elec[k]=field[i].name;
break;
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
cout<<civil[0]<<elec[0]<<elec[1]<<meng[0]<<endl;
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

