#include<iostream>
using namespace std;
int main()
{
double num,fact=1;
cout<<"enter a number:";
cin>>num;
for(int i=num;i>=1 ;i--)
fact=fact*i;
cout<<"the factorial of "<<num<<" is "<<fact;
}
