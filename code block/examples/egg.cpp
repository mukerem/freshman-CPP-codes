#include <iostream>
using namespace std;
int main()
{
int egg,cost;
float total,vat,tot;
cout<<"enter the number of eggs&&cost\n";
cin>>egg>>cost;
if(egg<=3)
total=egg*cost;
else
total=3*cost+(egg-3)*cost*95/100.0;
vat=total*15/100.0;
tot=total+vat;
cout<<"the cost is "<<total<<endl;
cout<<"the vat is "<<vat<<endl;
cout<<"the total cost is "<<tot;
float b=15,o=30,a=10,bb,oo,aa,vat,sum,total;
cout<<"enter the amount of banana,orange,ananas respectively\n";
cin>>bb>>oo>>aa;
total=b*bb+o*oo+a*aa;
vat=total*0.15;
sum=total+vat;
cout<<"the cost is "<<total<<endl;
cout<<"the vat is "<<vat<<endl;
cout<<"the total cost is "<<sum;
}
