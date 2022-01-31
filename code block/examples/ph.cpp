#include<iostream>
#include<cmath>
using namespace std;
int main()
{
float ph,hydron;
cout<<"enter the concentration of the hydronium\n";
cin>>hydron;
ph=-log10(hydron);
cout<<"the ph value is "<<ph<<endl;
if(ph<7)
cout<<"it is an acidic";
else if(ph==7)
cout<<"it is neutral";
else
cout<<"it is a basic";
}
