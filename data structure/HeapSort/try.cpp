#include <iostream>
using namespace std;
int max(int,int);
int sum(int,int);
int main()
{
int x,y,z,w;
cout<<"please enter the first number"<<endl;
cin>>x;
cout<<"please enter the second number"<<endl;
cin>>y;
z=max(x,y);
w=sum(x,y);
cout<<"the maximum number is"<<"   "<<z<<endl;
cout<<"their sum is"<<"  "<<w<<endl;
return 0;
}
int max(int a,int b)
{
int result=0;
if(a>b)
result=a;
else if(b>a)
result=b;
return result;
}
int sum(int a,int b)
{
int add=0;
if(a>=0  ||  b<=0 || a<=0)
    add=a+b;
    return add;
}
