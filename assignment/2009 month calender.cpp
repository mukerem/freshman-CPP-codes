#include <iostream>
using namespace std;
int main()
{
int date,constant,day,choice,mon;
string week [7]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
string month[12]={"Sep/Oct","Oct/Nov","Nov/Dec","Dec/Jan","Jan/Feb","Feb/Mar","Mar/Apr","Apr/May","May/June","June/July","July/Aug","Aug/Sep"};
cout<<"enter your month\n";
cin>>mon;
if(mon<=12)
{
constant=(2*mon+5)%7;;
cout<<"\tTHE CALENDER OF "<<month[mon]<<"  2009:\n\n";
cout<<"SUN\tMON\tTUE\tWED\tTHR\tFRI\tSAT\n\n";
for(int j=0;j<constant;j++)
cout<<"\t";
for(int i=1;i<=30;i++)
{
cout<<i<<"\t";
if((i+constant)%7==0)
cout<<endl<<endl;
}
repeat:
cout<<"\n\nenter your date\n\n";
cin>>date;
if(date>=1&&date<=30)
{
day=(2*mon+date+4)%7;
cout<<"The day of "<<date<<'/'<<mon<<'/'<<"2009 is "<<week[day];
}
else
cout<<"\n\nIt is invalid date\n\n";
cout<<"\n\nChoice List\n\n";
         cout<<"1)  do you want find another date\n";
         cout<<"2)  To EXIT\n";
         cin>>choice;
         switch(choice)
         {
         case 1: goto repeat;
         case 2: break;

         }}
else
cout<<"It is invalid month";
cout<<"\n\nThank you\n\n";
}
