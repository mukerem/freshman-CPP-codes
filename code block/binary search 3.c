#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;
int main()
{
int x[10]={8,7,41,5,6,90,15,42,20,53},left,mid,right,n;
left=0;
right=9;
cout<<"enter a number"<<endl;
cin>>n;
while(left<=right)
{
mid=(left+right)/2;
if (n==x[mid])
cout<<n<<"is found in x";
else if(n>x[mid])
left=mid+1;
else
right=mid-1;
}
return 0;
}
