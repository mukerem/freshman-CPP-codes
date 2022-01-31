#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
float d;
cin>>n;
int a[n][4];
for(int i=0;i<n;i++)
for(int j=0;j<4;j++)
cin>>a[i][j];
for(int i=0;i<n;i++)
{
cout<<"Bullet shot from ("<<a[i][0]<<", "<<a[i][1]<<")."<<endl;
cout<<"Bullet should hit CardinalBot at ("<<a[i][2]<<", "<<a[i][3]<<")."<<endl;
d=sqrt(pow(a[i][2]-a[i][0],2)+pow(a[i][3]-a[i][1],2));
if(d>13)
cout<<"The bullet explodes.\n\n";
else
cout<<"The bullet hits its target.\n\n";
}
}
