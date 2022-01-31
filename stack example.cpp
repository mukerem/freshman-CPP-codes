#include <bits/stdc++.h>
using namespace std;
int main()
{
stack<int>life;
life.push(5);
life.push(10);
life.push(4);
life.push(6);
life.push(7);
life.push(3);
life.push(9);
life.push(6);
while(life.size()!=1)
{
life.push(life.pop()+life.pop());
life.push(life.pop()*life.pop()));
}
cout<<stack[0];
}

