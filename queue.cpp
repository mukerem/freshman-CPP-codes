#include <bits/stdc++.h>
using namespace std;
int main()
{
queue<int>my;
stack<int>my2;
my.push(5);
my.push(15);
my.push(25);
my.push(35);
my.pop();
cout<<my.size()<<endl;
my2.push(5);
my2.push(15);
my2.push(25);
my2.push(35);
my2.pop();
cout<<my.back();
}
