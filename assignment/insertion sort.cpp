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
for (int i=1;i<n;i++)
{
cout<<"\n\n"<<i<<" iteration \n\n";
temp=x[i];
for (int j=i;j>0;j--)
{
if(temp<x[j-1])
{
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
