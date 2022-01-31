#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;
struct fruit
{
string name;
int quantity;
int id;
float price;
double total;
}shop[3];
int main()
{
shop[0].id=1;
shop[1].id=2;
shop[2].id=3;
shop[0].name="banana";
shop[1].name="orange";
shop[2].name="bread";
shop[0].quantity=2;
shop[1].quantity=12;
shop[2].quantity=22;
shop[0].price=2.25;
shop[1].price=5.50;
shop[2].price=7.75;
cout<<setiosflags(ios::left);
cout<<"id\t"<<"name\t"<<"qua\t"<<"price\t"<<"total\t"<<endl;
for(int i=0;i<3;i++)
{
shop[i].total=shop[i].quantity*shop[i].price;
cout<<shop[i].id<<"\t"<<shop[i].name<<"\t"<<shop[i].quantity<<"\t"<<shop[i].price<<"\t"<<shop[i].total<<endl;
}
}
