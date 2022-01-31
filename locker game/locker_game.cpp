#include <bits/stdc++.h>
using namespace std;
int main()
{
int pass=0,data,password,temp;
cout<<"Enter your password\n";
ifstream team("my password.txt");
team>>data;
team.close();
for(int i=0;i<5;i++)
{
cin>>password;
if(password==data)
{
pass++;
break;
}
else
cout<<"invalid password try again\n";
}
if(pass>0)
{
do
{
int num,stud,n,level,choice,chance=3,total=0;
string game="level2.txt";
ifstream in;
in.open(game.c_str());
if(in.fail())
{
 string game="level2.txt";
ofstream out;
out.open(game.c_str());
out<<1;
level=1;
}
else
in>>level;
srand(time(NULL));
num=rand()%50+50;
n=level/5+1;
int open[n],found[num];
for(int i=0;i<n;i++)
{
open[i]=rand()%10+1;
for(int k=0;k<i;k++)
{
while(open[i]==open[k])
open[i]=rand()%level+1;
}
}
for (int j=0;j<n;j++)
{
for (int i=1;i<=n-1;i++)
{
if(open[i]<open[i-1])
{
temp=open[i];
open[i]=open[i-1];
open[i-1]=temp;
}
}
}
cout<<"LOCKER GAME LEVEL "<<level<<endl;
if(n==1)
cout<<"only locker number "<<open[0]<<" is ";
else
{
cout<<"locker number ";
for(int i=0;i<n;i++)
{
cout<<open[i];
if(i<n-2)
cout<<",";
if(i==n-2)
cout<<" and ";
}
cout<<" are ";
}
cout<<"open out of "<<num<<" lockers\n";
for(int i=1;i<=num;i++)
{
int m=0;
for(int j=0;j<total;j++)
{
if(i%found[j]==0)
m++;
}
if(m%2==0)
{
for(int j=0;j<n;j++)
{
if(i==open[j])
{
found[total]=i;
total++;
}
}
}
else
{
int k=0;
for(int j=0;j<n;j++)
{
if(i==open[j])
k++;
}
if(k==0)
{
found[total]=i;
total++;
}
}
}
cout<<"How many students exit?\n";
for(int i=0;i<3;i++)
{
cin>>stud;
if(stud==total)
{
level++;
cout<<"Great you are correct you level up to level "<<level;
break;
}
else
{
chance--;
if(chance>0)
cout<<"ops incorrect answer you have "<<chance <<" chances try again\n ";
}
}
if(chance==0)
cout<<"GAME OVER the correct answer is "<<total;
ofstream out;
out.open(game.c_str());
out<<level;
cout<<"\n\nChoice List\n\n";
         cout<<"1)  To play again this game\n";
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
return 0;
}
}

