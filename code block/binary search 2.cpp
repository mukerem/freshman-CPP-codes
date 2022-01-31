#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;
int main()
{
int x[10]={1,2,3,4,5,6,7,8,9,10},left,mid,right,n,z=0;
left=0;
right=9;
cout<<"enter a number"<<endl;
cin>>n;
while(left<=right)
{
mid=(left+right)/2;
if (n==x[mid])
{
cout<<n<<" is found in x";
z++;
break;
}
else if(n>x[mid])
left=mid+1;
else
right=mid-1;
}
if(z==0)
cout<<n<<" is not found in x";

return 0;
}
