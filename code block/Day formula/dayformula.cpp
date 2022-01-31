#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;
double myformula(int,int,int);
int main()
{
int date,month,year,math,rapi;
string day [7]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
cout<<"enter your date\n";
cin>>date;
cout<<"enter your month\n";
cin>>month;
cout<<"enter your year\n";
cin>>year;
//check
int a=-1;
if(month==13)
{
if(year%4==3&&date<=6)
a++;
if(year%4!=3&&date<=5)
a++;
}
else
{
if(date<=30)
a++;
}
if(a==-1)
cout<<"It is invalid date";
if(a==0)
{
rapi=myformula(date,month,year);
for(int i=0;i<7;i++)
{
if(rapi==i)
cout<<"The day of "<<date<<'/'<<month<<'/'<<year<<" is "<<day[i];
}
}
}
double myformula(int Date,int Month,int Year)
{
int math,constant;
constant=(5*Year/4-1)%7;
math=(Month*2+Date+constant)%7;
return math;
}

