#include <bits/stdc++.h>
using namespace std;
int main()
{
int n=70;
for(int i=0;i<8;i++)
{
cout<<static_cast<char>(n+i*i-4*i);
if(i%4==0)
cout<<" ";
}}
