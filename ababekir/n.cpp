#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int i=1,n,sum=0;
cout<<"Enter the maximum number "<<endl;
cin>>n;
do
sum+=i++;
while(i<=n);
cout<<"The sum of the number from 1 to "<<n<<" is=: "<<sum;
}
