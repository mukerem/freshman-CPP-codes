#include<iostream>
//#include<iomanip>
//#include<cmath>
using namespace std;
struct fruit//module name or structure name.cpp
{
string name;//{data type ^ member of element
float price;
int quantity;
int id;
double total;//}
};
int main()
{
fruit mule[3];//structure object
  mule[0].id=1;// accessing member element
  mule[1].id=2;
  mule[2].id=3;
  mule[0].name="orange";
  mule[1].name="apple";
  mule[2].name="mango";
  mule[0].quantity=5;
  mule[1].quantity=12;
  mule[2].quantity=20;
  mule[0].price=5.25;
  mule[1].price=10.0;
  mule[2].price=2.50;
  cout<<"id\t"<<"name\t"<<"qua\t"<<"price\t"<<"total\t"<<endl;
  for(int i=0;i<=3;i++)
{
mule[i].total=mule[i].quantity*mule[i].price;
cout<<mule[i].id<<"\t"<<mule[i].name<<"\t"<<mule[i].quantity<<"\t"<<mule[i].price<<"\t"<<mule[i].total<<endl;
}
}
