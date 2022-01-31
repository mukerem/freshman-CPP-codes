#include<iostream>
using namespace std;
int main()
{
int a[3][3]={4,8,5,6,2,1,3,4,7},b[3][3]={7,4,5,8,9,6,3,2,1},c[3][3];
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
int sum=0;
for(int k=0;k<3;k++)
sum+=a[i][k]*b[k][j];
c[i][j]=sum;
}
}
//output of the original matrix
cout<<"The multiplication of \n";
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
cout<<a[i][j]<<"\t";
cout<<endl;
}
cout<<"\nand\n \n";
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
cout<<b[i][j]<<"\t";
cout<<endl;
}
cout<<"\nis\n\n";
//***********
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
cout<<c[i][j]<<"\t";
cout<<endl;
}
}

