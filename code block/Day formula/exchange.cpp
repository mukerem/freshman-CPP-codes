#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;
double myformula(int,int,int,int);
int main()
{
int date,month,year,math,rapi,Date,Month,Year,k;
string day [7]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
cout<<"enter your date\n";
cin>>date;
cout<<"enter your month\n";
cin>>month;
cout<<"enter your year\n";
cin>>year;
rapi=myformula(date,month,year,k);
cout<<"The day of "<<date<<'/'<<month<<'/'<<year<<" is "<<rapi;
}

double myformula(int Date,int Month,int Year,int r)
{
int DD,MM,YY;
if(Month<9)
YY=Year-8;
else if(Month>9)
YY=Year-7;
else
{
if((Year+1)%4==0)
{
if(Date<=11)
YY=Year-8;
else
YY=Year-7;
}
else
{
if(Date<=22)
YY=Year-7;
else
YY=Year-8;
}
return YY;
}
}
