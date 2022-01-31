#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
int n,m,b,d,k,det=0,r=0;
cout<<"enter the row and column of the matrix respectively\n";
cin>>n>>m;
int A[n][m],a[m];
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
cin>>A[i][j];
}
if(A[0][0]!=1)
{
for(int i=1;i<n;i++)
{
if(A[n][0]==1)
{
for(int j=0;j<m;j++)
{
a[j]=A[0][j];
A[0][j]=A[i][j];
A[i][j]=a[j];
}}}}
for(int i=1;i<n;i++)
{
k=-A[i][0]/A[0][0];
for(int j=0;j<m;j++)
{
A[i][j]+=k*A[0][j];
}}

for(int i=0;i<n-1;i++)
{
int c=0;
for(int j=0;j<m;j++)
{
if(A[i][j]==0)
c++;
}
if(c==m)
{
for(int h=0;h<m;h++)
{
a[h]=A[n-1][h];
A[n-1][h]=A[i][h];
A[i][h]=a[h];
}}}
for(int i=0;i<n;i++)
{
int z=0;
for(int j=0;j<m;j++)
{
if(A[i][j]!=0)
{
d=j;
z++;
break;//it is uesd to break the program
}}
if(z>0)
{
for(int h=d;h<m;h++)
A[i][h]=A[i][h]/A[i][d];
}}
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
cout<<"\t"<<A[i][j]<<setw(5);
cout<<endl;
}
}
