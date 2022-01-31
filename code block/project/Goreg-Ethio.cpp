#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;
double year2016(int,int,int ,int,int);
double year2015(int,int,int ,int,int);
int main()
{
int date,month,year,math,rapi,Date,Month,Year,k,m;
string day [7]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
cout<<"enter your date\n";
cin>>date;
cout<<"enter your month\n";
cin>>month;
cout<<"enter your year\n";
cin>>year;
//constant for year%4==0
if(year%4==0)
{
if(month==1) m=0;
else if(month==2||month==4||month==5)m=1;
else if(month==6||month==7)m=2;
else if(month==8)m=3;
else if(month==9||month==10)m=4;
else if(month==11||month==12)m=5;
else m=0;
if(month==1||month==3||month==11||month==12) k=4;
else if(month==2||month==4||month==5)k=3;
else if(month==6||month==7)k=2;
else if(month==9||month==10)k=5;
else k=1;
rapi=year2016(date,month,year,k,m);
}
//constant for year%4==3
else if(year%4==3)
{
if(month==1||month==4||month==5) m=0;
else if(month==2||month==6||month==7) m=1;
else if(month==8) m=2;
else if(month==9||month==10) m=3;
else if(month==11||month==12)m=4;
else m=-1;

if(month==1||month==4||month==5)k=3;
else if(month==2||month==6||month==7)k=2;
else if(month==3)k=4;
else if(month==9||month==10)k=6;
else if(month==11||month==12) k=5;
else k=1;
rapi=year2015(date,month,year,k,m);
}
}
double year2016(int Date,int Month,int Year,int r,int h)
{
int DD,MM,YY,con;
if(Month<9||(Month==9&&Date<11))
YY=Year-8;
else
YY=Year-7;
con=Date+Month*30+h-9;
DD=con%30;
if(con>275)
DD=DD-5;
if(DD==0)
DD=30;
if(Date-r>5)
MM=(Month+4)%12;
else
MM=(Month+3)%12;

if(MM==0)
{
if(Month==9&&Date>=11)MM=1;
else if(Month==9&&6<=Date && Date<=10)MM=13;
else MM=12;
}
cout<<"The date in Goregorian calender :"<<Date<<'/'<<Month<<'/'<<Year
<<endl<<"In Ethiopian calender  "<<DD<<'/'<<MM<<'/'<<YY;
}
//to calculate the formula for year%4==3
double year2015(int Date,int Month,int Year,int r,int h)
{
int DD,MM,YY,con;
if(Month<9||(Month==9&&Date<=11))
YY=Year-8;
else
YY=Year-7;
con=Date+Month*30+h-8;
DD=con%30;

if(con>276)
DD=DD-6;
if(DD==0)
DD=30;
if(Date-r>5)
MM=(Month+4)%12;
else
MM=(Month+3)%12;
if(MM==0)
{
if(Month==9&&Date>=12)MM=1;
else if(Month==9&&6<=Date && Date<=11)MM=13;
else MM=12;
}
cout<<"The date in Goregorian calender :"<<Date<<'/'<<Month<<'/'<<Year
<<endl<<"In Ethiopian calender  "<<DD<<'/'<<MM<<'/'<<YY;
}
