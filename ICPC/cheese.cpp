#include <bits/stdc++.h>
using namespace std;
int main()
{
int a,b,x,y,s,r,h;
char c,d;
cin>>c>>a>>d>>b;
while(!('a'<=c&&c<='h')||!('a'<=d&&d<='h')||!(1<=a&&a<=8)||!(1<=b&&b<=8))
{
cout<<"enter correct form\n";
cin>>c>>a>>d>>b;
}
y=abs(a-b);
x=abs(static_cast<int>(c)-static_cast<int>(d));
s=max(x,y);
r=min(x,y);
h=s-r;
cout<<s<<endl;
while(r>0)
{
if(static_cast<int>(c)-static_cast<int>(d)<0)
{
if(a-b<0)
cout<<"UR\n";
else
cout<<"DR\n";
}
else
{
if(a-b<0)
cout<<"UL\n";
else
cout<<"DL\n";
}
r--;
}
while(h>0)
{
if(x-y<0)
{
if(a-b<0)
cout<<"U\n";
else
cout<<"D\n";
}
else
{
if(static_cast<int>(c)-static_cast<int>(d)<0)
cout<<"R\n";
else
cout<<"L\n";
}
h--;
}
}
