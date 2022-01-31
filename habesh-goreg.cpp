#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;
double habesha(int,int,int,int);
int main()
{
int date,month,year,k,ethio;
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
else if(month<13)
{
if(date<=30)
a++;
}
if(a==-1)
cout<<"It is invalid date";
if(a==0)
{
if(year%4!=0)
{
if(month==1) k=0;
else if(month==2||month==3||month==6)k=1;
else if(month==4||month==7||month==8)k=2;
else if(month==5||month==9||month==10)k=3;
else if(month==11)k=4;
else if(month==12)k=5;
else k=6;
}
else
{

if(month==1) k=-1;
else if(month==2||month==3||month==6)k=0;
else if(month==4||month==6||month==7||month==8)k=1;
else if(month==5||month==7||month==8)k=2;
else if(month==9||month==10)k=3;
else if(month==11)k=4;
else if(month==12)k=5;
else k=6;
}
ethio=habesha(date,month,year,k);
}
}
double habesha(int Date,int Month,int Year,int r)
{
int DD,MM,YY;
if(Month==1||Month==3||Month==8||Month==10)
{
DD=(Date-r+10)%30;
if(DD==0)DD=30;
}
else if(Month==6)
{
if(Year%4==0)
{
DD=(Date-r+9)%29;
if(DD==0)DD=29;
}
else
{
DD=(Date-r+8)%28;
if(DD==0)DD=28;
}
}
else
{
DD=(Date-r+11)%31;
if(DD==0)DD=31;
}
if(Date-r<21)
MM=(Month+8)%12;
else
MM=(Month+9)%12;
if(MM==0)
MM=12;
if(Month<4||(Month==4&&Date-r<=20))
YY=Year+7;
else
YY=Year+8;
cout<<"The date in Ethiopian calender :"<<Date<<'/'<<Month<<'/'<<Year
<<endl<<"In Goregorian calender  "<<DD<<'/'<<MM<<'/'<<YY;
}
