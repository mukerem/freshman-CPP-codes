#include<iostream>
using namespace std;
int main()
{
double r,p,a;
cin>>r;
p=2*3.14*r;
a=3.14*r*r;
if (r < 0.0)
cout << "A negative radius is invalid"<< endl;
else
{
cout<<"The perimeter of the circle is "<<p<<endl;
cout<<"The area of the circle is "<<a<<endl;
cout<<"The radius of the circle is "<<r<<endl;
}

}
