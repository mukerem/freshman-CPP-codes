#include<iostream>
using namespace std;
void add(int,int,int&);
int main()
{
int x,y,sum;
cout<<"enter two number\n";
cin>>x>>y;
add(x,y,sum);
cout<<"the summation of "<<x<<" and "<<y<<" is "<<sum<<endl;
}
void add(int a,int b,int& c)
{
c=a+b;
cout<<a<<endl<<b<<endl;
a=7;
b=5;
//c=a+b;
}
