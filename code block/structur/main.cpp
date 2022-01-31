#include <iostream>

using namespace std;

struct node
{
    string prod_disc,quality;
    int prod_no,prod_date,expird_date;
    double cost;
};
int main()
{
    cout<<"\ta, Accept the value om key bored"<<endl;
    cout<<"-------------------------------------------------------"<<endl;
    struct node temp;
    cout<<"Enter product description : ";
    cin>>temp.prod_disc;
    cout<<"Enter product number : ";
    cin>>temp.prod_no;
    cout<<"Enter quality : ";
    cin>>temp.quality;
    cout<<"Enter cost of product : ";
    cin>>temp.cost;
    cout<<"Enter year of product date : ";
    cin>>temp.prod_date;
    cout<<"Enter year of expired date : ";
    cin>>temp.expird_date;
    cout<<"-------------------------------------------------------"<<endl
    <<endl
    <<"b, check for product date weather is before 2 year from now or not"<<endl
    <<"----------------------------------------------------------------"<<endl;
    if(2009 - temp.prod_date <= 2)cout<<"\tProduct produce before 2 year!!"<<endl;
    else cout<<"\tProduct produce between the nearest 2 year!!"<<endl;
    cout<<"----------------------------------------------------------------"<<endl
    <<endl
    <<"c, check for expire date should be after 2 year from now or it is useless"<<endl
    <<"-----------------------------------------------------------------------"<<endl;
    if(temp.expird_date - 2009 > 2)cout<<"\tProduct is expired!!"<<endl;
    else cout<<"\tProduct is expired after 2 year!!"<<endl;
    cout<<"-----------------------------------------------------------------------"<<endl
    <<endl;
    double tax;
    tax = temp.cost*10/100;
    cout<<"d, 10% tax should be deducted from the cost of the product"<<endl
    <<"-----------------------------------------------------------"<<endl
    <<"\tcost of product after deducted tax = "<<temp.cost-tax<<endl
    <<"-----------------------------------------------------------\n"<<endl
    <<"e, The data in good format"<<endl
    <<"-----------------------------------------------------------"<<endl
    <<"\tProduct description = "<<temp.prod_disc<<endl
    <<"\tProduct number = "<<temp.prod_no<<endl
    <<"\tQuality = "<<temp.quality<<endl
    <<"\tCost of product = "<<temp.cost<<endl
    <<"\tyear of product date = "<<temp.prod_date<<endl
    <<"\tYear of expired date = "<<temp.expird_date<<endl
    <<"-----------------------------------------------------------"<<endl;
    return 0;
}
