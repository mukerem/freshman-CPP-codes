
#include<iostream>
#include<iomanip>
#include<cmath>
#define f(m,n) for(int i=m;i<n;i++)
typedef long long ll;
using namespace std;
int main()
{

ll i,num;
while(cin>>num&&num!=0){
for( i=2;i<num;i++)
{
if(num%i==0)
{
break;
}}
if(i==num)
cout<<"PRIME\n";

else
    cout<<i<<"  "<<num/i<<"  COMPOSITE\n";
    int n;
    f(5,10){
    cout<<i<<" ";}
}
}


