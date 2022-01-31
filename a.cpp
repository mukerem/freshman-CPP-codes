#include<iostream>
using namespace std;
int main()
{
int n,c;
cin>>n;
int k[n][11];
for(int i=0;i<n;i++)
{
cin>>c;
k[i][0]=c;
for(int j=1;j<=c;j++)
cin>>k[i][j];
}
for(int i=0;i<n;i++)
{
int u=0;
for(int j=1;j<k[i][0];j++)
if(2*k[i][j]<=k[i][j+1])
u++;
cout<<"Denominations:";
for(int j=1;j<=k[i][0];j++)
cout<<"\t"<<k[i][j];
cout<<endl;
if(u==k[i][0]-1)
cout<<"Good coin denominations!";
else
cout<<"Bad coin denominations!";
cout<<endl;
}}
