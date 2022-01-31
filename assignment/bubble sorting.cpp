#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cout<<"enter the size of the list"<<endl;
cin>>n;
string x[n],temp;
cout<<"enter "<<n<<" strings  randomly "<<endl;
for (int i=0;i<n;i++)
cin>>x[i];
cout<<"before sorting \n"<<endl;
for (int i=0;i<n;i++)
cout<<"\t"<<x[i]<<"\t\t";
cout<<"\n\n";
for (int i=0;i<n-1;i++)
{
cout<<"\n\n"<<i+1<<" iteration \n\n";
for (int j=1;j<n-i;j++)
{
if(x[j]<x[j-1])
{
temp=x[j];
x[j]=x[j-1];
x[j-1]=temp;
}
for (int k=0;k<n;k++)
cout<<"\t"<<x[k]<<"\t\t";
cout<<endl;
}}
cout<<"\n\nafter sorting \n"<<endl;
for (int i=0;i<n;i++)
cout<<"\t"<<x[i]<<"\t\t";
cout<<"\n\n";
return 0;
}

