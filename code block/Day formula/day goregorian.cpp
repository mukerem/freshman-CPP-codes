#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;
double myformula(int,int,int,int);
int main()
{
int date,month,year,math,rapi,k;
string day [7]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
cout<<"enter your date\n";
cin>>date;
cout<<"enter your month\n";
cin>>month;
cout<<"enter your year\n";
cin>>year;
if(year%4==0)
{
if(month==1) k=0;
else if(month==2||month==4||month==5)k=1;
else if(month==6||month==7)k=2;
else if(month==8)k=3;
else if(month==9||month==10)k=4;
else if(month==11||month==12)k=5;
else k=0;
}
if(year%4!=0)
{
if(month==1||month==4||month==5) k=0;
else if(month==2||month==6||month==7)k=1;
else if(month==8)k=2;
else if(month==9||month==10)k=3;
else if(month==11||month==12)k=4;
else k=-1;
}

rapi=myformula(date,month,year,k);
for(int i=0;i<7;i++)
{
if(rapi==i)
cout<<"The day of "<<date<<'/'<<month<<'/'<<year<<" is "<<day[i];
}
}
double myformula(int Date,int Month,int Year,int r)
{
int math,constant;
constant=((5*(Year-1)/4)+4+r)%7;
math=(Month*2+Date+constant)%7;
return math;
}

