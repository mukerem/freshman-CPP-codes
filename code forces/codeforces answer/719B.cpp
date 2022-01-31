#include<iostream>
#include<string>
using namespace std;
int main()
{
int n,c=0,u=0;
string d;
cin>>n;
cin>>d;
for(int i=1;i<d.length();i++)
{
if(d[i]==d[i-1])
{
if(u==0)
{
u=1;
c++;
}
else
u=0;
}
else
{
if(u==1)
{
u=1;
c++;
}
else
u=0;
}
}
cout<<c;
}
