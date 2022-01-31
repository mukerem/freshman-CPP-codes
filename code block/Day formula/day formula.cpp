#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;
struct day
{
string dat;
};
double myformula(int,int,int);
int main()
{
int date,month,year,math,rapi,constant=3;
day formula[7]=
{
    {"Monday"},{"Tuesday"},{"Wednesday"},{"Thursday"},{"Friday"},{"Saturday"},{"Sunday"}
    };
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
cout<<"The day of "<<date<<'/'<<month<<'/'<<year<<" is "<<formula.dat[i];
}
}
double myformula(int Date,int Month,int Year)
{
//constant=abs(year-)
math=(Month*2+Date+constant)%7;
return math;
}
