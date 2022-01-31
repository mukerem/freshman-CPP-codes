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
 cout<<"enter id number of the five students\n";
 for(int i=0;i<5;i++)
 {
 cin.getline(id[i],10);
 }
 char dept[5][20];
 cout<<"enter departement of the five students\n";
 for(int i=0;i<5;i++)
 {
 cin.getline(dept[i],20);
 }
float course[5][8],maxi[3],mini[3],max[5],min[5],smx,smn,mid,final,total=0;
char cours[5];
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
maxi[i]=0;
 for(int j=0;j<5;j++)
{
if(maxi[i]<course[j][i])
maxi[i]=course[j][i];
}
}
for(int i=3;i<=5;i++)
{
mini[i]=100;
 for(int j=0;j<5;j++)
{
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
cout<<"------   ----     ------------     ----      -----       -----       ------       -----   \n";
for(int i=0;i<5;i++)
{
cout<<name[i]<<setw(12)<<id[i]<<setw(12)<<dept[i]<<setw(12)<<course[i][3]<<setw(12);
cout<<course[i][4]<<setw(12)<<course[i][5]<<setw(12)<<course[i][6]<<setw(12);
cout<<course[i][7]<<setw(12)<<cours[i]<<endl;
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
