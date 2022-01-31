#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
int  x[3][3],y[3][3],z[3][3],i,j,k;
cout<<"Enter the value of first 3*3 matrix "<<endl;
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
cin>>x[i][j];
}
cout<<"Enter value the of second 3*3 matrix "<<endl;
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
cin>>y[i][j];
}
cout<<"The element of the first matrix is "<<endl;
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
cout<<"\t"<<x[i][j];
cout<<endl;
}
cout<<"The element of the second matrix is "<<endl;
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
cout<<"\t"<<y[i][j];
cout<<endl;
}
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
z[i][j]=0;
for(k=0;k<=2;k++)
z[i][j]=(x[i][k]*y[k][j])+z[i][j];
}
}
cout<<"The multiplication of the two matrices is "<<endl;
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
cout<<"\t"<<z[i][j]<<setw(5);
cout<<endl;
}
return  0;
}
