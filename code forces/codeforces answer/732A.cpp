#include<iostream>
using namespace std;
int main()
{
int n,k,c;
cin>>n>>c;
for(int i=1;;i++)
{
if((n*i)%10==c||(n*i)%10==0)
{
cout<<i;
break;
}
}
}
