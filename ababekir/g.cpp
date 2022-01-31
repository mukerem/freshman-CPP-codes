#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int sum=0,n;
cout<<"Enter the maximum number "<<endl;
cin>>n;
for(int i=1;i<=n;++i)
sum+=i;
cout<<"The sum of the number from 1 to "<<n<<" is=: "<<sum;
}
