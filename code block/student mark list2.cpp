#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
char name[5][10];
 cout<<"enter name of the five students\n";
 for(int i=0;i<5;i++)
 {
 cin.getline(name[i],10);
 }
char id[5][10];
 cout<<"enter id number of five students"<<endl;
 for(int i=0;i<5;i++)
 {
 cin.getline(id[i],10);
 }
 char dept[5][20];
 cout<<"enter departement of five  students"<<endl;
 for(int i=0;i<5;i++)
 {
 cin.getline(dept[i],20);
 }
float course[5][8],maxi[3],mini[3],max[5],min[5],smx,smn,mid,temp,final,total=0;
char cours[5];
int k;
for(int i=0;i<5;i++)
{
cout<<"enter mark of c++ for student"<<name[i]<<endl;
cin>>course[i][3];
cout<<"enter mark of java for student"<<name[i]<<endl;
cin>>course[i][4];
cout<<"enter mark of calculus for student"<<name[i]<<endl;
cin>>course[i][5];
course[i][6]=course[i][3]+course[i][4]+course[i][5];
course[i][7]=course[i][6]/3;
}
for(int i=0;i<5;i++)
{
max[i]=0;
min[i]=100;
for(int j=3;j<=5;j++)
{
if(max[i]<course[i][j])
max[i]=course[i][j];
if(min[i]>course[i][j])
min[i]=course[i][j];
}
}
for(int i=3;i<=5;i++)
{
maxi[i]=course[0][i];
mini[i]=course[0][i];
 for(int j=1;j<5;j++)
{
if(maxi[i]<=course[j][i])
maxi[i]=course[j][i];
if(mini[i]>course[j][i])
mini[i]=course[j][i];
}
}

for(int i=0;i<5;i++)
{
if(course[i][7]>=90)
cours[i]='A';
else if(course[i][7]>=80)
cours[i]='B';
else if(course[i][7]>=70)
cours[i]='C';
else if(course[i][7]>=60)
cours[i]='D';
else
cours[i]='F';
}
cout<<" name\t  id\t  departement\t   c++ \t    java\t    calculus\t total\t      aver\t   grade\n";
cout<<"------   ------ --------- -------- --------- ---------- --------- -----------"<<endl;
int s,index,te;
int x[5],a[5];
for(int i=0;i<=4;i++)
x[i]=course[i][6];
for (int j=0;j<5;j++)
{
for (int i=0;i<=4;i++)
{

if(x[i]<x[i+1])
{
te=x[i];
x[i]=x[i+1];
x[i+1]=te;
}
}
}
for (int i=0;i<=4;i++)
{
for (int k=0;k<=4;k++)
{
if(x[i]==course[k][6])
a[i]=k;
}
}
for(int i=0;i<=4;i++)
{
cout<<name[a[i]]<<setw(12)<<id[a[i]]<<setw(12)<<dept[a[i]]<<setw(12)<<course[a[i]][3]<<setw(12);
cout<<course[a[i]][4]<<setw(12)<<course[a[i]][5]<<setw(12)<<course[a[i]][6]<<setw(12);
cout<<course[a[i]][7]<<setw(12)<<cours[a[i]]<<endl;
}

for(int i=0;i<5;i++)
{
cout<<"The max. mark of " <<name[i]<<" is"<<max[i]<<endl;
cout<<"The min. mark of " <<name[i]<<" is"<<min[i]<<endl;
}
for(int i=3;i<=5;i++)
{
cout<<"The max. mark of course " <<i-2<<" is"<<maxi[i]<<endl;
cout<<"The min. mark of course " <<i-2<<" is"<<mini[i]<<endl;
}


return 0;
}
