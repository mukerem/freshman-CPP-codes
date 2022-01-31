#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int date,constant,day,choice;
string week [7]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
constant=2;
cout<<"\tTHE CALENDER OF TIKIMET  2009:\n\n";
cout<<"SUN\tMON\tTUE\tWED\tTHR\tFRI\tSAT\n\n";
for(int j=0;j<constant;j++)
cout<<"\t";
for(int i=1;i<=30;i++)
{
cout<<i<<"\t";
if((i+constant)%7==0)
cout<<"\n\n";
}
cout<<"\n\n";
system("pause");
repeat:
system("cls");
cout<<"\n\nenter your date\n\n";
cin>>date;
if(date>=1&&date<=30)
{
//day=(2*month+date+c)%7;
day=(date+1)%7;
cout<<"The day of "<<date<<"\/ 2 \/ 2009 is "<<week[day];
}
else
cout<<"\n\nIt is invalid date\n\n";
cout<<"\n\nChoice List\n\n";
         cout<<"press 1 to continue ....\n\n";
         cout<<"press any key except 1 to exit ....\n";
         cin>>choice;
         switch(choice)
         {
         case 1: goto repeat;
         default: break;

         }
cout<<"\nThank you\n\n";
}
