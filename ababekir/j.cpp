#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int x,limit,sum;
cout<<"please enter a number bigger than 1:";
cin>>limit;
sum=0;
for(x=1;x<=limit;x++)
{
cout<<"I am adding "<<x<<endl;
sum=sum+x;
}
cout<<endl;
cout<<"The number of all the numbers from 1 to ";
cout<<limit<<" is "<<sum;
return 0;
}
