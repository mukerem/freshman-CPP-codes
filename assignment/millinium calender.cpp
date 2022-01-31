#include <iostream>
using namespace std;
int main()
{
int date,constant,day,choice,mon,con,yr;
string week [7]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
string month[12]={"Sep/Oct","Oct/Nov","Nov/Dec","Dec/Jan","Jan/Feb","Feb/Mar","Mar/Apr","Apr/May","May/June","June/July","July/Aug","Aug/Sep"};
for(int year=2000;year<=3000;year++)
{
cout<<"\t\n\nTHE CALENDER OF "<<year<<" :\n\n";
con=(5*year/4-1)%7;
for(int i=1;i<=12;i++)
{
constant=(2*i+1+con)%7;
cout<<"\n\t\t"<<month[i-1]<<"\n";
cout<<"SUN\tMON\tTUE\tWED\tTHR\tFRI\tSAT\n\n";
for(int j=0;j<constant;j++)
cout<<"\t";
for(int k=1;k<=30;k++)
{
cout<<k<<"\t";
if((k+constant)%7==0)
cout<<"\n";
}
if(i<12)
cout<<"\n\n";
}
if(year%4!=3)
{
for(int i=1;i<=5;i++)
{
cout<<i<<"\t";
if((i+con+6)%7==0)
cout<<"\n";
}}
else
for(int i=1;i<=6;i++)
{
cout<<i<<"\t";
if((i+con+6)%7==0)
cout<<"\n";
}}
repeat:
cout<<"\n\nenter your date\n\n";
cin>>date;
cout<<"enter your month\n";
cin>>mon;
cout<<"enter your year\n";
cin>>yr;
int a=-1;
if(mon==13)
{
if(yr%4==3&&date<=6)
a++;
if(yr%4!=3&&date<=5)
a++;
}
else if(mon<13)
{
if(date<=30)
a++;
}
if(a==-1)
cout<<"It is invalid date";
if(a==0)
{
con=(5*yr/4-1)%7;
day=(2*mon+date+con)%7;
cout<<"The day of "<<date<<'/'<<mon<<'/'<<yr<<" is "<<week[day];
}
cout<<"\n\nChoice List\n\n";
         cout<<"1)  do you want find another date\n";
         cout<<"2)  To EXIT\n";
         cin>>choice;
         switch(choice)
         {
         case 1: goto repeat;
         case 2:break;
         }
cout<<"\n\nThank you\n\n";
}
