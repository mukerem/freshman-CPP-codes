#include<iostream>
using namespace std;
int main()
{
int days,y,m,d;
cout<<"\nEnter number of days :";
cin>>days;
y=days/365;
days=days%365;
m=days/30;
d=days%30;
cout<<"years :"<<y<<"\nmonths :"<<m<<"\ndays :"<<d;

}
