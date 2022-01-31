#include<bits/stdc++.h>
using namespace std;
int main()
{
do
{
int con,choice;
string game="my game level.txt";
ifstream in;
in.open(game.c_str());
if(in.fail())
{
 string game="my game level.txt";
ofstream out;
out.open(game.c_str());
out<<1;
con=1;
}
else
in>>con;
int n,x,c,z,y,d,pos=0,m,step=0,even=0;
n=(con-1)/10+3;
int num[n],number[n];
srand(time(NULL));
for(int i=0;i<n;i++)
{
d=0;
y=rand();
number[i]=y%10;
if(number[0]==0)
i--;
for(int j=i-1;j>=0;j--)
{
if(number[i]==number[j])
d++;
}
if(d>0)
i--;
}
cout<<"Number game level "<<con<<" you have "<<(con-1)/5+4<<" chances\n";
cout<<"Enter a "<<n<<" digit number\n";
if(n>4)
{
for(int i=0;i<n;i++)
{
if(number[i]%2==0)
even++;
}
cout<<"The number consists of  "<<even<<" even numbers and "<<n-even<<" odd numbers "<<endl;
}
cout<<"\nYour number\t\tNumber\t\tPosition\t\tEnter your number\n";
cout<<"------------\t\t--------\t---------\t\t--------------\n";
while(pos<n)
{
pos=0,m=0,c=0;
cin>>x;
z=x;
if(pow(10,n-1)>x||x>=pow(10,n))
cout<<"\nthe number is invalid digit\n";
else
{
for(int i=0;i<n;i++)
{
num[n-i-1]=x%10;
x=x/10;
}
for(int i=0;i<n-1;i++)
{
for(int j=i+1;j<n;j++)
 {
if(num[i]==num[j])
c++;
}
}
if(c>0)
cout<<"your number is invalid enter another number\t\t\t";
else
{
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
 {
if(num[i]==number[j])
m++;
 }
if(num[i]==number[i])
pos++;
}
cout<<z<<"\t\t\t"<<m<<"\t\t"<<pos<<"\t\t\t";
step++;
if(pos==n)
{
cout<<"\ncongra you got the point\n";
con++;
string game="my game level.txt";
ofstream out;
out.open(game.c_str());
out<<con;
}else
{
if(step>=(con-1)/5+4)
{
cout<<"\ngame over the answer is  ";
for(int i=0;i<n;i++)
cout<<number[i];
break;
}}}}}
cout<<"\nchoice list\n";
cout<<"\t\t\t1: to play again\n";
cout<<"\t\t\t2: to EXIT\n";
cin>>choice;
switch(choice)
{
case 1:break;
case 2:goto end;;
}}
while(1);
end:
return 0;
}
