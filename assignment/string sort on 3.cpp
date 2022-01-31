#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,sort;
cout<<"\npress 1 to bubble sort\n";
cout<<"\npress 2 to selection sort\n";
cout<<"\npress any key except 1&2 to insertion sort\n";
cin>>sort;
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
if(sort==1)
{
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
}}}
else if(sort==2)
{
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
}}
else
{
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
}}}
cout<<"\n\nafter sorting \n"<<endl;
for (int i=0;i<n;i++)
cout<<"\t"<<x[i]<<"\t\t";
cout<<"\n\n";
return 0;
}

