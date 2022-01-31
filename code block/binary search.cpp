#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;
int main()
{
int n,x[10],a=0;
cout<<"enter 10 numbers"<<endl;
for(int i=0;i<=9;i++)
cin>>x[i];
cout<<"enter a number"<<endl;
cin>>n;
for(int i=0;i<=9;i++)
{
if(n==x[i])
{
cout<<n<<" is  found in x"<<endl;
a++;
break;
}
}
if(a==0)
cout<<n<<" is not found in x"<<endl;
return 0;
}
