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
if(year%4==0)
{
if(month==1) k=0;
else if(month==2)k=1;
else if(month==4) k=1;
else if(month==5) k=1;
else if(month==6)k=2;
else if(month==7)k=2;
else if(month==8)k=3;
else if(month==9)k=4;
else if(month==10)k=4;
else if(month==11)k=5;
else if(month==12)k=5;
else k=0;
}
if(year%4==3)
{
if(month==1) k=0;
else if(month==2) k=1;
else if(month==4) k=0;
else if(month==5) k=0;
else if(month==6) k=1;
else if(month==7) k=1;
else if(month==8) k=2;
else if(month==9) k=4;
else if(month==10)k=5;
else if(month==11)k=6;
else if(month==12)k=6;
else k=-1;
}
rapi=myformula(date,month,year,k);
}

double myformula(int Date,int Month,int Year,int r)
{
int DD,MM,YY,con;
if(Month<9)
YY=Year-8;
else if(Month>9)
YY=Year-7;
else
{
if((Year)%4==0)
{
if(Date<11)
YY=Year-8;
else
YY=Year-7;
}
else if(Year%4==3)
{
if(Date<=11)
YY=Year-8;
else
YY=Year-7;
}
}
con=Date+Month*30+r-9;
DD=con%30;
if(Year%4==0&&con>275)
DD=DD-5;
if(Year%4==3&&con>276)
DD=DD-6;
if(DD==0)
DD=30;
if(Year%4!=3)
{
if(Date-r>=11)
MM=(Month+4)%12;
else
MM=(Month+3)%12;
}
else
{
if(Date-r>=11)
MM=(Month+4)%12;
else
MM=(Month+3)%12;
}
if(MM==0)
{
if(Date>11)MM=1;
else if(Date==11&&Year%4!=3)MM=1;
else if(Date==11&&Year%4==3)MM=13;
else if(6<=Date && Date<=10)MM=13;
else MM=12;
}
cout<<"The date in Goregorian calender :"<<Date<<'/'<<Month<<'/'<<Year
<<endl<<"In Ethiopian calender  "<<DD<<'/'<<MM<<'/'<<YY;
}
