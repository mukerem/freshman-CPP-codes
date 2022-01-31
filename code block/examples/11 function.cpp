#include<iostream>
using namespace std;
int product(int,int);
void add(int,int);
int main()
{
int x,y,z,sum;
cout<<"enter two number\n";
cin>>x>>y;
z=product(x,y,z);
add(x,y);
//cout<<"the product of "<<x<<" and "<<y<<" is "<<product(x,y)<<endl;//the same as the above
}
int product(int a,int b)
{
int pro;
pro=a*b;
cout<<"the product of "<<a<<" and "<<b<<" is "<<pro<<endl;
}
void add(int a,int b)
{
int sum;
sum=a+b;
cout<<"the summation of "<<a<<" and "<<b<<" is "<<sum<<endl;
}
