#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;
int main()
{
do
{
int num,n,choice,decimal,like=0,k,sum=0;
cout<<"Enter the binary number\n";
cin>>num;
decimal=num;
for(int i=1;i<20;i++)
{
if(pow(10,i-1)<=num&&pow(10,i)>num)
{
n=i;
break;
}
}
for(int i=0;i<n;i++)
{
k=num%10;
sum+=k*pow(2,i);
if(k!=0&&k!=1)
like++;
num=num/10;
}
if(like>0)
cout<<"Invalid binary number\n";
else
cout<<"The decimal number of "<<decimal<<" is "<<sum<<endl;
cout<<"\n\nChoice List\n\n";
         cout<<"1)  To convert another decimal to binary\n";
         cout<<"2)  To EXIT\n";
         cin>>choice;
         switch(choice)
         {
         case 1:
                break;
         case 2: goto end;
         }
 }while(1);
end:
cout<<"Thank you\n";
return 0;
}
