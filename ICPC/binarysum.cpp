#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,digit,m,min,index=0,i,a=0,x[20];;
cin>>n;
while(n>0)
{
for(int i=0;i<20;i++)
if(pow(10,i)<=n&&n<pow(10,i+1))
{
digit=i;
break;
}
for(i=1;i<10;i++)
if(i*pow(10,digit)<=n&&n<(i+1)*pow(10,digit))
{
a+=i;
break;
}
for(i=index;i<a;i++)
{
x[i]=pow(10,digit);
n-=pow(10,digit);
}
index=a;
}
for(i=0;i<a;i++)
cout<<x[i]<<"\t";
cout<<n;
}

