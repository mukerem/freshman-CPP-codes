#include<iostream>
#include<string>
using namespace std;
int main()
{
string n;
int c=0,p=-1;
cin>>n;
for(int i=0;i<n.length();i++)
{
if(n[i]=='A'||n[i]=='E'||n[i]=='O'||n[i]=='I'||n[i]=='U'||n[i]=='Y')
{
c=max(c,i-p);
p=i;
}
}
c=max(c,n.length()-p);
cout<<c;
}
