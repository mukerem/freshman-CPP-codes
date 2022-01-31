#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;
struct student
{
string id;
string name,father;
float CGPA;
string choise[3];
int depname[3];
string school;
int num_choice;
;
};
int main()
{
int n,x,y,z;
cout<<"Enter the number of students "<<endl;
cin>>n;
cout<<"How many students accept civil & arch. engineering"<<endl;
cin>>x;
cout<<"How many students accept electrical & computing engineering"<<endl;
cin>>y;
cout<<"How many students accept mechanical,chemical & material engineering"<<endl;
cin>>z;
student field[n];
int civil[x],elec[y],meng[z];
for(int i=0;i<x;i++)
civil[i]=-1;
for(int i=0;i<y;i++)
elec[i]=-1;
for(int i=0;i<z;i++)
meng[i]=-1;
//to accept students information
cout<<"Enter 1 to choose Civil & Architectural Engineering"<<endl;
cout<<"Enter 2 to choose Electrical & Computing Engineering"<<endl;
cout<<"Enter 3 to choose Mechanical,Chemical & Material Engineering"<<endl;
for(int i=0;i<n;i++)
{
cout<<"Enter First Name of student "<<i+1<<endl;
cin>>field[i].name;
cout<<"Enter id number of Name  "<<field[i].name<<endl;
cin>>field[i].id;
cout<<"Enter CGPA of "<<field[i].name<<endl;
cin>>field[i].CGPA;
for(int j=0;j<3;j++)
{
cout<<"Enter "<<j+1<<" choice of "<<field[i].name<<endl;
cin>>field[i].depname[j];
if(field[i].depname[j]==1)
field[i].choise[j]="civil";
else if(field[i].depname[j]==2)
field[i].choise[j]="electrical";
else
field[i].choise[j]="mechanical";
}
}

//@@@@@ to sort students CGPA in order
string t,ID,te[n];

float temp,max,tem[n];
for(int i=0;i<n;i++)
{
int check=0,a=i,x[4];
max=field[i].CGPA;
for(int j=i+1;j<n;j++)
{
if(max<field[j].CGPA)
{
max=field[j].CGPA;
a=j;
check++;
}
}
x[i]=a;
if(check>0)
{
temp=field[i].CGPA;
field[i].CGPA=field[a].CGPA;
field[a].CGPA=temp;
t=field[i].name;
field[i].name=field[a].name;
field[a].name=t;
ID=field[i].id;
field[i].id=field[a].id;
field[a].id=ID;
for(int k=0;k<3;k++)
{
te[k]=field[i].choise[k];
field[i].choise[k]=field[a].choise[k];
field[a].choise[k]=te[k];
}
for(int k=0;k<3;k++)
{
tem[k]=field[i].depname[k];
field[i].depname[k]=field[a].depname[k];
field[a].depname[k]=tem[k];
}
}
}
//to choose students schhol
for(int i=0;i<n;i++)
{
int a=0;
for(int j=0;j<3;j++)
{
if(a==0)
{
//only for civil school
if(field[i].depname[j]==1)
{
for(int k=0;k<x;k++)
{
if(civil[k]==-1)
{
civil[k]=i;
field[i].school="civil     ";
field[i].num_choice=j+1;
a++;
break;
}
}
}
//only for electrical school
if(field[i].depname[j]==2)
{
for(int k=0;k<y;k++)
{
if(elec[k]==-1)
{
elec[k]=i;
field[i].school="electrical";
field[i].num_choice=j+1;
a++;
break;
}
}
}
//only for mechanical school
if(field[i].depname[j]==3)
{
for(int k=0;k<z;k++)
{
if(meng[k]==-1)
{
meng[k]=i;
field[i].school="mechanical";
field[i].num_choice=j+1;
a++;
break;
}
}
}
}
}
}
//to display the students info
int display;
cout<<"What You Want ?"<<endl;
cout<<"Enter 1 To display all students data"<<endl;
cout<<"Enter 2 To display students data in each school "<<endl;
cin>>display;
if(display==1)
{
cout<<"No\t"<<"Name\t\t"<<"Id Number \t"<<"CGPA\t\t"<<"Field"<<"\t"<<"    Choice No"<<endl;
cout<<"----\t"<<"-----\t\t"<<"--------   \t"<<"-----\t\t"<<"-----\t"<<"    --------"<<endl;
for(int i=0;i<n;i++)
cout<<i+1<<"\t"<<field[i].name<<"\t\t"<<field[i].id<<"\t"<<field[i].CGPA<<"\t\t"<<field[i].school<<"\t"<<field[i].num_choice<<endl;
}
//to display the 3 school data
else
{
cout<<"School of Civil & Architectural Engineering Student Data"<<endl;
cout<<"\n"<<endl;
cout<<"No\t"<<"Name\t\t"<<"Id Number \t"<<"CGPA\t\t"<<"Field"<<"\t"<<"    Choice No"<<endl;
cout<<"----\t"<<"-----\t\t"<<"--------   \t"<<"-----\t\t"<<"-----\t"<<"    --------"<<endl;
for(int i=0;i<x;i++)
cout<<i+1<<"\t"<<field[civil[i]].name<<"\t"<<field[civil[i]].CGPA<<"\t"<<field[civil[i]].num_choice<<endl;
cout<<"\n"<<endl;
cout<<"School of Electrical Engineering & Computing  Student Data"<<endl;
cout<<"\n"<<endl;
cout<<"No\t"<<"Name\t\t"<<"Id Number \t"<<"CGPA\t\t"<<"Field"<<"\t"<<"    Choice No"<<endl;
cout<<"----\t"<<"-----\t\t"<<"--------   \t"<<"-----\t\t"<<"-----\t"<<"    --------"<<endl;
for(int i=0;i<y;i++)
cout<<i+1<<"\t"<<field[elec[i]].name<<"\t"<<field[elec[i]].CGPA<<"\t"<<field[elec[i]].num_choice<<endl;
cout<<"\n"<<endl;
cout<<"School of Mechanical,Chemical & Material Engineering Student Data"<<endl;
cout<<"\n"<<endl;
cout<<"No\t"<<"Name\t\t"<<"Id Number \t"<<"CGPA\t\t"<<"Field"<<"\t"<<"    Choice No"<<endl;
cout<<"----\t"<<"-----\t\t"<<"--------   \t"<<"-----\t\t"<<"-----\t"<<"    --------"<<endl;
for(int i=0;i<z;i++)
cout<<i+1<<"\t"<<field[meng[i]].name<<"\t"<<field[meng[i]].CGPA<<"\t"<<field[meng[i]].num_choice<<endl;
}
}
