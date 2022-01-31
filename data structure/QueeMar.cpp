#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int main(){
int n,count;
cin>>n;
char A[n][99];
int size[n];
string v;
for(int i=0;i<n;i++)
{
getline(cin,v);
for(int p=0;p<v.size();p++)
A[i][p]=v[p];
cin>>size[i];
}
for(int i=0;i<n;i++)
{
A[i][strlen(A[i])]=' ';
cout<<"Sign #"<<i+1<<":\n";
count=0;
int j=0;
while(A[i][j]!='\0')
{
if(strlen(A[i])<=size[i])
{
cout<<"[";
for(int r=0;r<strlen(A[i])-1;r++)
cout<<A[i][r];
cout<<"]"<<endl;
break;
}cout<<"[";
for(int k=j;k<size[i]+j;k++)
cout<<A[i][k%strlen(A[i])];
cout<<"]"<<endl;
j++;
}
}
}
