#include <bits/stdc++.h>
using namespace std;
int main()
{
int l,w,x,a,b;
cin>>l>>w>>x;
if(l%x==0)
a=l/x;
else
a=l/x+1;
if(w%x==0)
b=w/x;
else
b=w/x+1;
cout<<a*b;
}
