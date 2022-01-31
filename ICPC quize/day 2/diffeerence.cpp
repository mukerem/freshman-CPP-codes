#include<iostream>
#include<cmath>
using namespace std;
int n[10000000][4];
int main()
{
int i=-1,j,a,b,c,d;
do
{
i++;
for(int k=0;k<4;k++)
cin>>n[i][k];
}
while((n[i][0]!=0)||(n[i][1]!=0)||(n[i][2]!=0)||(n[i][3]!=0));
for(int k=0;k<i;k++)
{
j=0;
while((n[k][0]!=n[k][1])||(n[k][1]!=n[k][2])||(n[k][2]!=n[k][3])||(n[k][0]!=n[k][3]))
{
a=n[k][0];
b=n[k][1];
c=n[k][2];
d=n[k][3];
n[k][0]=abs(n[k][0]-b);
n[k][1]=abs(n[k][1]-c);
n[k][2]=abs(n[k][2]-d);
n[k][3]=abs(n[k][3]-a);
j++;
}
cout<<j<<endl;
}
}
