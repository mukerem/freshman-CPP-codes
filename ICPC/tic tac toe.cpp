#include <bits/stdc++.h>
using namespace std;
int main()
{
int a=0;
char  n[4][4];
for (int i=0;i<4;i++)
for (int j=0;j<4;j++)
cin>>n[i][j];
for (int i=0;i<4;i++)
{
if(a>0)
break;
for (int j=0;j<4;j++)
{
if(n[i][j]=='.')
{
if(n[i][j-1]=='x'&&n[i][j+1]=='x'||n[i-1][j]=='x'&&n[i+1][j]=='x'
||n[i-1][j-1]=='x'&&n[i+1][j+1]=='x'||n[i-1][j+1]=='x'&&n[i+1][j-1]=='x'
||n[i][j-1]=='x'&&n[i][j-2]=='x'||n[i][j+1]=='x'&&n[i][j+2]=='x'
||n[i-1][j-1]=='x'&&n[i-2][j]=='x'||n[i+1][j]=='x'&&n[i+2][j]=='x'
||n[i-1][j-1]=='x'&&n[i-2][j-2]=='x'||n[i+1][j+1]=='x'&&n[i+2][j+2]=='x'
||n[i+1][j-1]=='x'&&n[i+2][j-2]=='x'||n[i-1][j+1]=='x'&&n[i-2][j+2]=='x')
{
cout<<"YES";
a++;
break;
}}}}
if(a==0)
cout<<"NO";
}
