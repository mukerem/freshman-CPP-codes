#include<iostream>
#include<cmath>
using namespace std;
int main()
{
long int num,x=100;
cin>>num;
for(int i=1;i<x;i++)
if(num>=pow(10,i-1)&&num<pow(10,i))
{
cout<<i;
break;
}
}
