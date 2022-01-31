#include <bits/stdc++.h>
using namespace std;
int main()
{
int bingo[25],bin[5][5],num[5][5],y,n,d,number,row[12],c,a=0,r;
srand(time(NULL));
for(int i=0;i<25;i++)
{
d=0;
y=rand();
bingo[i]=y%25+1;
for(int k=0;k<i;k++)
{
if(bingo[i]==bingo[k])
d++;
}
if(d>0)
i--;
}
for(int i=0;i<25;i++)
bin[i/5][i%5]=bingo[i];
for(int i=0;i<5;i++)
{
for(int j=0;j<5;j++)
cout<<bin[i][j]<<"\t";
cout<<endl;
}
for(int k=0;k<20;k++)
{
if(a%2==0)
{
cin>>number;
a++;
}
else
{
int b=0;
for(int j=0;j<12;j++)
if(row[i]<5)
{
max=row[i];
r=i;
break;
}
for(int i=r;i<12;i++)
{
if(row[i]==5)
continue;
if(max<row[i])
{
max=row[i];
column=i;
}}
for(int j=0;j<12;j++)
if(max==row[j])
{
b++;
}
}
for(int i=0;i<5;i++)
for(int j=0;j<5;j++)
if(number==bin[i][j])
{
bin[i][j]=0;
break;
}
for(int i=0;i<12;i++)
{
c=0;
for(int j=0;j<5;j++)
{
if(bin[i][j]==0)
c++;
}
row[i]=c;
c=0;
for(int j=0;j<5;j++)
{
if(bin[j][i]==0)
c++;
}
row[i]=c;
c=0;
for(int j=0;j<5;j++)
{
if(bin[j][j]==0)
c++;
}
row[i]=c;
c=0;
for(int j=0;j<5;j++)
{
if(bin[j][4-j]==0)
c++;
}
row[i]=c;
}
}
}
