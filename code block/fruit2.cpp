#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;
struct fruit
{
int id;
string name;
int quantity;
float price;
double total;
}shop[3]=
{
{1,"banana",2,2.25},
{2,"orange",12,5.50},
{3,"bread",22,7.75}
};
int main()
{
cout<<"id\t"<<"name\t"<<"qua\t"<<"price\t"<<"total\t"<<endl;
for(int i=0;i<3;i++)
{
shop[i].total=shop[i].quantity*shop[i].price;
cout<<shop[i].id<<"\t"<<shop[i].name<<"\t"<<shop[i].quantity<<"\t"<<shop[i].price<<"\t"<<shop[i].total<<endl;
}
}
