#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;
int main()
{
int num,k=-1;
cout<<"Enter your number \n";
cin>>num;
int prime[num/2];
for(int i=2;i<=num;i++)
{
int a=0;
for(int j=1;j<=i;j++)
{
if(i%j==0)
a++;
}
if(a==2)
{
k++;
prime[k]=i;
}
}
cout<<"Prime numbers less than or equal to "<<num<<endl;
for(int i=0;i<=k;i++)
cout<<prime[i]<<setw(4);
}
