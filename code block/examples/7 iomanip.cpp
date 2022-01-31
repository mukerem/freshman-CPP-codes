#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
cout<<"cout with manipulators "<<setw(50)<<"can control output formating "<<endl;
cout<<1/3.0<<endl;
cout<<fixed<<setprecision(2)<<2/300.0<<endl;
cout<<scientific<<0.00054<<endl;
}
