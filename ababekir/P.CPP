#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
for(int i=1;i<=100;i++)
{
if(i%2!=0)
continue;
else
cout<<setw(4)<<i<<endl;
}
}
