#include<iostream>
using namespace std;
int main()
{
double n=1,sum=0;
do
{
 sum+=1/n++;
}
while(n<=15);
cout<<sum;
}
