#include<iostream>
using namespace std;
struct fruit
{
string name;
int id;
int quantity;
float price;
double total;
}my[3];
int main()
{
for(int i=0;i<=2;i++)
{
cout<<"please enter id"<<endl;
cin>>my[i].id;
cout<<"please enter name"<<endl;
cin>>my[i].name;
cout<<"please enter qua"<<endl;
cin>>my[i].quantity;
cout<<"please enter price"<<endl;
cin>>my[i].price;
}
cout<<"id\t"<<"name\t"<<"qua\t"<<"price\t"<<"total"<<endl;
for(int i=0;i<=3;i++)
{
my[i].total=my[i].quantity*my[i].price;
cout<<my[i].id<<"\t"<<my[i].name<<"\t"<<my[i].quantity<<"\t"<<my[i].price<<"\t"<<my[i].total<<endl;
}
}
