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
rapi=myformula(date,month,year);
for(int i=0;i<7;i++)
{
if(rapi==i)
cout<<"The day of "<<date<<'/'<<month<<'/'<<year<<" is "<<day[i];
}
}
double myformula(int Date,int Month,int Year)
{
int math,constant;
constant=(5*Year/4-1)%7;
if(Date<=30)
{
if(Month<=12)
math=(Month*2+Date+constant)%7;
else if(Month==13)
{
if(Year%4!=3)
{
if(Date<6)
math=(54+Date+constant)%7;
else
cout<<Date<<'/'<<Month<<'/'<<Year<<" is  not logocal date";
}
else
{
if(Date<=6)
math=(54+Date+constant)%7;
else
cout<<Date<<'/'<<Month<<'/'<<Year<<" is  not logocal date";
}
}
else
cout<<Date<<'/'<<Month<<'/'<<Year<<" is not logocal date";

return math;
}
else
cout<<Date<<'/'<<Month<<'/'<<Year<<" is not logocal date";
}


