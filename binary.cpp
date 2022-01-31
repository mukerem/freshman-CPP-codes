#include <iostream>
#include <fstream>
#include <iomanip>
#include<cmath>
using namespace std;
int main()
{
do
{
int num,n,choice,decimal,like,k;
cout<<"Enter your choice\nTO convert decimal number to\n";
cout<<"1)binary\n2)octa\n3)deca\n4)deca hexa\n";
cin>>like;
if(like==1)k=2;
if(like==2)k=8;
if(like==3)k=10;
if(like==4)k=16;
cout<<"Enter your number\n";
cin>>num;
if(num==0)
cout<<"The binary code of "<<num<<" is 0000";
else
{
decimal=num;
for(int i=0;i<20;i++)
{
if(pow(k,i-1)<=num&&pow(k,i)>num)
{
n=i;
break;
}
}
int binary[n];
for(int i=1;i<=n;i++)
{
binary[n-i]=num%k;
num=num/k;
}
cout<<"The binary code of "<<decimal<<" is\n";
if(n<4)
{
for(int i=0;i<4-n;i++)
cout<<0;
}
for(int i=0;i<n;i++)
cout<<binary[i];
}
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
