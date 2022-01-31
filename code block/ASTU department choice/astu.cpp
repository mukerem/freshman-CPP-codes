#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;
struct fruit
{
string name;
float CGPA;
int choise[3];
int dep;
}field[4];
int main()
{
cout<<"Key 1:Civil &A rchitectural Engineering"<<endl;
cout<<"    2:Electrical & Computing Engineering"<<endl;
cout<<"    3:Mechaniacl,Chemical & Material Engineering"<<endl;

for(int i=0;i<4;i++)
{
cout<<"Enter  Name"<<endl;
cin>>field[i].name;
cout<<"Enter CGPA of "<<field[i].name<<endl;
cin>>field[i].CGPA;
for(int j=1;j<=3;j++)
{
cout<<"Enter "<<j<<" choice of "<<field[i].name<<endl;
cin>>field[i].choise[j];
}
}
string civil[1],elec[2],meng[1];
string t;
int te[4];
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
if(field[i].choise[j]==1)
{
for(int k=0;k<1;k++)
{
if(civil[k]!=field[0].name&&civil[k]!=field[1].name&&civil[k]!=field[2].name&&civil[k]!=field[3].name)

{
civil[k]=field[i].name;
a++;
}
}
}
else if(field[i].choise[j]==2)
{
for(int k=0;k<2;k++)
{
if(elec[k]!=field[0].name&&elec[k]!=field[1].name&&elec[k]!=field[2].name&&elec[k]!=field[3].name)
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
if(meng[k]!=field[0].name&&meng[k]!=field[1].name&&meng[k]!=field[2].name&&meng[k]!=field[3].name)
{
meng[k]=field[i].name;
a++;
}
}
}
}
}
}
string depa[4];
int check[4];
for(int i=0;i<=3;i++)
{
for(int j=0;j<1;j++)
{
if(field[i].name==civil[j])
{
depa[i]="Civil";
field[i].dep=1;
}
else if(field[i].name==meng[j])
{
depa[i]="Mechanical";
field[i].dep=3;
}
else
{
depa[i]="Electrical";
field[i].dep=2;
}
}
}
for(int i=0;i<=3;i++)
{
for(int j=0;j<3;j++)
{
if(field[i].dep==field[i].choise[j])
check[i]=j;
}
}

cout<<"No\t"<<"Name\t"<<"CGPA\t"<<"Field"<<"\t"<<"Choice No"<<endl;
cout<<"----\t"<<"-----\t"<<"-----\t"<<"-----\t"<<"--------"<<endl;
for(int i=0;i<=3;i++)
cout<<i+1<<"\t"<<field[i].name<<"\t"<<field[i].CGPA<<"\t"<<depa[i]<<"\t   "<<check[i]<<endl;
}
