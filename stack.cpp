#include <bits/stdc++.h>
using namespace std;
int main()
{
int n=65,rem,s[7],rear=-1,x=hash("me");
string a=" ";
while(n>0)
{
rem=n%2;
s[++rear]=rem;
n=n/2;
}
while(s!=-1)
{
a=a+s[rear--];
}
cout<<x;
}
