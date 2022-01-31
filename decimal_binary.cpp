#include <iostream>
#include<cmath>
using namespace std;
void decimal(){
int num,n,choice,decimal,like=0,k,sum=0,i=0;
cout<<"Enter the binary number\n";
cin>>num;
decimal=num;
while(num>0){
k=num%10;
sum+=k*pow(2,i);
if(k!=0&&k!=1){
cout<<"Invalid binary number\n";
return ;
}
i++;
num=num/10;
}
cout<<"The decimal number of "<<decimal<<" is "<<sum<<endl;
}
void binary(){
int num,n,choice,decimal;
cout<<"Enter your decimal number\n";
cin>>num;
if(num==0)
cout<<"The binary code of "<<num<<" is 0000";
else
{
decimal=num;
for(int i=0;i<20;i++)
{
if(pow(2,i-1)<=num&&pow(2,i)>num)
{
n=i;
break;
}
}
int binary[n];
for(int i=1;i<=n;i++)
{
binary[n-i]=num%2;
num=num/2;
}
cout<<"The binary code of "<<decimal<<" is ";
for(int i=0;i<n;i++)
cout<<binary[i];
}
}
int main(){
int choice;
do{
cout<<"\n\nChoice List\n\n";
         cout<<"1)  To convert binary to decimal \n";
         cout<<"2)  To convert decimal to binary\n";
         cout<<"3)  To EXIT\n";
         cin>>choice;
         switch(choice)
         {
         case 1:
                decimal();
                break;
        case 2:
                binary();
                break;
         default: goto end;
         }
}
while(true);
end:
cout<<"\nThank you\n";
return 0;
}

