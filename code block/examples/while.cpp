#include <iostream>
#include<cmath>
using namespace std;
int main()
{
int x,total=0;
for(int i=0;i<=4;i++)
{
cout<<"inter a number";
cin>>x;
if(x%2==1)
total=total+x;
}
cout<<"the total of the even number is "<<total;
}
