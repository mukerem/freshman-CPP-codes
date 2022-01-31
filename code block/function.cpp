#include<iostream>
using namespace std;
int sum(int ,int &);
int main()
{
int x=4,y=6;
cout<<sum(x,y)<<endl;
cout<<x<<" "<<y<<endl;
}
int sum(int a,int & b)
{
a++;
b+=++a;
cout<<a++<<a++<<a;
return b+a;
}
