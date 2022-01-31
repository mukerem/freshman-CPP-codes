#include <iostream>
#include <fstream>
#include <iomanip>
#include<cmath>
#include <bits/stdc++.h>
using namespace std;
class maths
{
private:
	float base_radius;
	float inner_radius;
	float length;
	float height;
	float width;
	float slant_height;
	float angle;
	float side;
	float pi=3.1428;
public:
    void circle();
    void cube();
    void pyramid();
    void prism();
    void cone();
    void frustum_pyramid();
    void frustum_cone();
    void cylinder();
    void sphere();
};
void maths::circle()
{
cout<<"Enter the radius of the circle\n";
cin>>length;
cout<<"\n\nThe area of the circle is "<<float(pi*pow(base_radius,2));
cout<<" and\nThe circumference of the circle is  "<<float(2*pi*base_radius);
}
void maths::cube()
{
cout<<"Enter the side length of the cube\n";
cin>>length;
cout<<"\n\nThe volume of the cube is "<<float(pow(length,3));
cout<<"\nThe total surface area of the cube is "<<float(6*pow(length,2));
}
void introductory()
{
cout<<"press ENTER";
cin.get();
}
int  main()
{
 introductory();
int choice;
maths formula;
do
{
cout<<"\n\n\n\n\n\nChoice List\n\n";
cout<<"1)  To calculate area & circumference of circle\n";
cout<<"2)  To calculate volume & total surface area of cube\n";
cout<<"3)  To EXIT\n";
cin>>choice;
         switch(choice)
         {
         case 1:formula.circle();
                break;
         case 2:formula.cube();
                break;
         case 3: goto end;
         }
 }while(1);
end:
return 0;
}

