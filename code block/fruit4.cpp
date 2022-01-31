#include <iostream>
using namespace std;
struct fruit
{
    string name;
    int id;
    int quantity;
    float price;
    double total;
}shop[3];
int main()
{
    shop[0].id=001;
    shop[1].id=002;
    shop[2].id=003;
    shop[0].name="apple";
    shop[1].name="orange";
    shop[2].name="mango";
    shop[0].quantity=5;
    shop[1].quantity=25;
    shop[2].quantity=50;
    shop[0].price=55.5;
    shop[1].price=25.25;
    shop[2].price=2.5;
    cout<<"id\t"<<"name\t"<<"qua\t"<<"price\t"<<"total\t"<<endl;
    for (int i=0;i<=2;i++)
    {
        shop[i].total=shop[i].quantity*shop[i].price;
        cout<<shop[i].id<<"\t"<<shop[i].name<<"\t"<<shop[i].quantity<<"\t"<<shop[i].price<<"\t"<<shop[i].total<<endl;
    }
}

