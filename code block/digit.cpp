#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int num;
cin>>num;
for(int i=1;i<8;i++)
if(num>=pow(10,i-1)&&num<pow(10,i))
{
cout<<i;
break;
}
}
