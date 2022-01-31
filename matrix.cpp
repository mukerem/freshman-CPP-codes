#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int n,a,b,sum=0;
cout<<"enter the order of matrix \n";
cin>>n;
int A[n][n],x[n-2];
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
cin>>A[i][j];
}
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
int r=0;
x[r]=i;
if(j!=i)
{
r++;
x[r]=j;
for(int l=0;l<n;l++)
{
int c=0;
for(int k=0;k<n-2;k++)
{
if(l==x[k])
c++;
}
if(c==0)
{
a=l;
break;
}
}
for(int l=a+1;l<n;l++)
{
int d=0;
for(int k=0;k<n-2;k++)
{
if(l==x[k])
d++;
}
if(d==0)
{
b=l;
break;
}
}
sum+=pow(-1,i+j+1)*A[0][i]*A[1][j]*(A[n-2][a]*A[n-1][b]-A[n-2][b]*A[n-1][a]);
}
}
}
cout<<sum;
}
