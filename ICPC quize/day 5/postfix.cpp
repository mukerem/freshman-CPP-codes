#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,a,b,d;
char c;
stack<int> q;
q.push(0);
while(q.top()!='#')
{
cin>>c;
if(c=='+'||c=='-'||c=='*')
{
a=q.top();
q.pop();
b=q.top();
q.pop();
if(c=='+')
d=b+a;
else if(c=='*')
d=b*a;
else
d=b-a;
q.push(d);
}
else if(c=='#')
q.push(c);
else
q.push(c-48);
}
q.pop();
cout<<q.top();
}
