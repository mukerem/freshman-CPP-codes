#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int n;
for(n=1;n<=20;n++)
{
cout<<setw(4)<<n;
int sq=n*n;
cout<<setw(6)<<sq<<endl;
}
}
