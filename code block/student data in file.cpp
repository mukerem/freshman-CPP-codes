#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
using namespace std;
char name[10][30],smx[10],smn[10];
int main()
{
string file="jimm.txt";
ofstream out;
out.open(file.c_str());
float course[10][8],max,min,mid,final,total=0;
char grade[10];

 char name[10][30],temp[10][30];;
 cout<<"enter name of the two students\n";
 for(int i=0;i<2;i++)
 {
 cin.getline(name[i],30);
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
out<<" name\t  id\t     mid \t final\t  total\t      grade\n";
out<<"------   ----     ----      -----       -----        -----   \n";
for(int i=0;i<2;i++)
 {
out<<name[i]<<setw(12)<<id[i]<<setw(12)<<course[i][3]<<setw(12);
out<<course[i][4]<<setw(12)<<course[i][5]<<setw(12)<<grade[i]<<endl;
}
out<<"maximum mark is  "<<max<<"   scored by student   "<<smx;
out<<endl;
out<<"minmum mark is   "<<min<<"   scored by student   "<<smn;
out<<endl;
cout<<"the file is found in jimm"<<endl;
out.close();
    return 0;
}

