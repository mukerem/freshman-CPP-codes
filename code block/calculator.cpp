#include<iostream>
using namespace std;
double add(double a,double b)
{
return a+b;
}
double product(double a,double b)
{
return a*b;
}
double sub(double a,double b)
{
return a-b;
}
double div(double a,double b)
{
return a/b;
}
int modulo(int a,int b)
{
return a%b;
}
int main()
{
double x,y,c,ans;
cout<<"1)  addition \n2)multiplication\n3)subtraction\n4)division\n5)modulo\n";
cin>>c;
cout<<"\nEnter two number\n";
cin>>x>>y;
if(c==1)
ans=add(x,y);
else if(c==2)
ans=product(x,y);
else if(c==3)
ans=sub(x,y);
else if(c==4)
ans=div(x,y);
else
ans=modulo(int(x),int(y));
cout<<ans<<endl;
}


