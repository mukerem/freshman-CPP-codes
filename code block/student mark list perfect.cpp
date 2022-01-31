#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
char name[10][30],smx[10],smn[10];
int main()
{
float course[10][8],max,min,mid,final,total=0;
char grade[10];

 char name[10][30],temp[10][30];;
 cout<<"enter name of the  students\n";
 for(int i=0;i<2;i++)
 {
 cin.get(name[i],30);
 }
for(int i=0;i<2;i++)
{
for(int j=i+1;j<2;j++)
{
if(strcmp(name[i],name[j])>0)
{
strcpy(temp[i],name[i]);
strcpy(name[i],name[j]);
strcpy(name[j],temp[i]);
}
}
}
char id[10][30];
 for(int i=0;i<2;i++)

 {
cout<<"enter id number of student  "<<name[i]<<endl;
 cin.getline(id[i],30);
 }

for(int i=0;i<2;i++)
    {
    cout<<"enter  mid   for student  "<<name[i]<<endl;
    cin>>course[i][3];

    cout<<"enter final  for student  "<<name[i]<<endl;
    cin>>course[i][4];
    course[i][5]=course[i][3]+course[i][4];
}
    max=course[0][5];
    strcpy(smx,name[0]);
    min=course[0][5];
    strcpy(smn,name[0]);
    for(int i=0;i<2;i++)
    {
        if(max<course[i][5])
        {
         max=course[i][5];
        strcpy(smx,name[i]);
        }
       if(min>course[i][5])
        {
         min=course[i][5];
        strcpy(smn,name[i]);
        }
    }
   for(int i=0;i<2;i++)
    {
   if(course[i][5]>=90)
   grade[i]='A';
   else if(course[i][5]>=80)
   grade[i]='B';
   else if(course[i][5]>=70)
   grade[i]='C';
   else if(course[i][5]>=60)
   grade[i]='D';
   else
   grade[i]='F';
    }
cout<<" name\t  id\t   mid \t  final\t  total\t      grade\n";
cout<<"------   ----     ----    -----   ----- -------   \n";
for(int i=0;i<2;i++)
 {
cout<<name[i]<<setw(12)<<id[i]<<setw(12)<<course[i][3]<<setw(12);
cout<<course[i][4]<<setw(12)<<course[i][5]<<setw(12)<<grade[i]<<endl;
}
cout<<"maximum mark is  "<<max<<"   scored by student   "<<smx;
cout<<endl;
cout<<"minmum mark is   "<<min<<"   scored by student   "<<smn;
cout<<endl;
    return 0;
}

