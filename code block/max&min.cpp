#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;
int main()
{
int n,j,max,min,x[10];
cout<<"enter 10 numbers"<<endl;
for(int i=0;i<=9;i++)
cin>>x[i];
max=x[0];
min=x[0];
for(int i=0;i<=9;i++)
{
if(max<=x[i])
{
max=x[i];
n=i;
}
if(min>=x[i])
{
min=x[i];
j=i;

}
}
cout<<"the max number is   "<<max<<" found in "<<n<<" index"<<endl;
cout<<"the min number is   "<<min<<" found in "<<j<<" index"<<endl;
return 0;
}
