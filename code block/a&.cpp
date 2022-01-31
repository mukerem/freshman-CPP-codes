#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int c=0,x,total=0;
while(c<5)
{
cout<<"enter";
cin>>x;
if(x>100)
break;
total+=x;
c++;
}
cout<<total;
cout<<sqrt(5);
}
