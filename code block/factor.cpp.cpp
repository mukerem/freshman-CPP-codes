#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
using namespace std;
int main()
{
int num,n=0;
cout<<"Enter a number\n";
cin>>num;
int x[n];
for(int i=1;i<=num;i++)
{
if(num%i==0)
{
n++;
x[n-1]=i;
}
}
for(int i=0;i<n;i++)
cout<<x[i]<<endl;
}
