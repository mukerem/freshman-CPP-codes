 #include <iostream>
  #include <fstream>
#include <cmath>
#include<iomanip>
using namespace std;
int main()
{
int x[3][4],y[4][4],z[3][4],i,j,k;
cout<<"Enter the value of the first 3 by 4 matrix"<<endl;
for(i=0;i<=2;i++)
{
for(j=0;j<=3;j++)
cin>>x[i][j];
}
cout<<"Enter the value of the second 4 by 4 matrix"<<endl;
for (i=0;i<=3;i++)
{
for(j=0;j<=3;j++)
cin>>y[i][j];
}
for(i=0;i<=2;i++)
{
for(j=0;j<=3;j++)
{
z[i][j]=0;
for(k=0;k<=3;k++)
z[i][j]=(x[i][k]*y[k][j])+z[i][j];
}
}
cout<<"the multiplication of two matrices is"<<endl;
for(i=0;i<=2;i++)
{
for(j=0;j<=3;j++)
cout<<"\t"<<z[i][j]<<setw(5);
cout<<endl;
}
return 0;
}
