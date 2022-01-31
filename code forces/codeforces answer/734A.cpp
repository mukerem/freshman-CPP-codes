#include<iostream>
#include<string>
using namespace std;
int main()
{
int n,c=0;
string d;
cin>>n;
cin>>d;
for(int i=0;i<n;i++)
{
if(d[i]=='A')
c++;
else
c--;
}
if(c>0)
cout<<"Anton";
else if (c<0)
cout<<"Danik";
else
cout<<"Friendship";
}
