#include <bits/stdc++.h>
using namespace std;
int main()
{
int x;
stack<int>my;
queue<int>my2;
my.push(5);
my.push(52);
my.push(54);
my.push(15);
my.pop();
cout<<my.size();
my2.push(5);
my2.push(52);
my2.push(54);
my2.push(15);
x=my2.pop();
cout<<x;
my2.pop();
cout<<my2.front();
}
