#include <bits/stdc++.h>
using namespace std;
int main()
{
int date,space,day,choice,mon;
string week [7]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
string month[12]={"Sep","Oct","Nov","Dec","Jan","Feb","Mar","Apr","May","June","July","Aug"};
cout<<"\tTHE CALENDER OF  2009:\n\n";
for(int i=1;i<=12;i++)
{
space=(2*i+5)%7;
cout<<"\n\t\t"<<month[i-1]<<"\n";
cout<<"SUN\tMON\tTUE\tWED\tTHR\tFRI\tSAT\n\n";
for(int j=0;j<space;j++)
cout<<"\t";
for(int k=1;k<=30;k++)
{
cout<<k<<"\t";
if((k+space)%7==0)
cout<<"\n";
}
if(i<12)
cout<<"\n\n";
}
for(int i=1;i<=5;i++)
{
cout<<i<<"\t";
if((i+3)%7==0)
cout<<"\n";
}
cout<<"\n\nenter your date\n\n";
cin>>date;
cout<<"enter your month\n";
cin>>mon;
int a=-1;
if(mon==13)
{
if(date<=5)
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
day=(2*mon+date+4)%7;
cout<<"The day of "<<date<<'/'<<mon<<'/'<<"2009 is "<<week[day];
}
}
