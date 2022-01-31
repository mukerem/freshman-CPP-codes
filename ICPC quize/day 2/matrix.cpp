#include<iostream>
using namespace std;
int main()
{
int n,c,r;
cin>>n;
string answer[n];
for(int i=0;i<n;i++)
{
cin>>r>>c;
int a[r][c];
for(int j=0;j<r;j++)
{
for(int k=0;k<c;k++)
{
cin>>a[j][k];
}
}
for(int j=0;j<r;j++)
{
for(int k=1;k<c;k++)
{
if(k==c-1&&j!=0)
a[j][k]-=a[j-1][k];
a[j][k]-=a[j][k-1];
}
}
if(a[r-1][c-1]==0)
answer[i]="YES";
else
answer[i]="NO";
}
for(int i=0;i<n;i++)
cout<<"Case #"<<i+1<<":"<<answer[i]<<endl;
}

