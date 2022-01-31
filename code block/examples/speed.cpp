#include <iostream>
#include<cmath>
using namespace std;
int main()
{
double speed, fe, fr;
fe = 2e10;
cout<<"enter the speed\n";
cin>>fr;
speed = 6.685e8 * (fr - fe) / (fr + fe);
double area, r;
cout<<"enter the radius\n ";
cin>>r;
area=4/3*3.14*pow(r,3);
cout << "The speed is "<< speed << "miles/hour " << endl;
cout<<"the area of the triangle is "<<area;
return 0;
}

