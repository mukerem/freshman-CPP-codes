#include <bits/stdc++.h>
using namespace std;
int main()
{
long  int num,l;
cin>>num;
l=num;
while(num>0)
{
if(num%10==1)
num=num/10;
else if(num%100==14)
num=num/100;
else if(num%1000==144)
num=num/1000;
else
{
cout<<l<<" is not magic number\n";
break;
}
}
if(num==0)
cout<<l<<" is magic number";
}
