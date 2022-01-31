#include<iostream>
#include<iomanip>
using namespace std;
double slope(double x1,double y1,double x2,double y2)
{
return (y2-y1)/(x2-x1);
}
int main()
{
double x1,x2,y1,y2;
cout<<"Enter the first point coordinate:";
cin>>x1>>y1;
cout<<"Enter the second point coordinate:";
cin>>x2>>y2;
cout<<"The slope of ("<<x1<<","<<y1<<") and ("<<x2<<","<<y2<<") is :  "<<setprecision(2)<<slope(x1,y1,x2,y2);
}
