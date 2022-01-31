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
cout<<"\nbefore sorting \n"<<endl;
for (int i=0;i<n;i++)
cout<<"\t"<<x[i]<<"\t\t";
cout<<"\n\n";
for (int i=0;i<n-1;i++)
{
int smallest=i;
for (int j=i+1;j<n;j++)
{
if(x[j]<x[smallest])
smallest=j;
}
temp=x[i];
x[i]=x[smallest];
x[smallest]=temp;
cout<<"\n\n"<<i+1<<" iteration \n\n";
for (int k=0;k<n;k++)
cout<<"\t"<<x[k]<<"\t\t";
cout<<endl;
}
cout<<"\n\nafter sorting \n"<<endl;
for (int i=0;i<n;i++)
cout<<"\t"<<x[i]<<"\t\t";
cout<<"\n\n";
}
