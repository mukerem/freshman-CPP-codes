#include <iostream>
#include <fstream>
#include <cmath>
#include<iomanip>
using namespace std;
int main()
{
int size;
cout<<"Enter the number of rows\n";
cin>>size;
int x[size][size],det=0,i,j,k;
for(i=0;i<size;i++)
{
for(j=0;j<size;j++)
{
cout<<"Enter the value of A("<<i+1<<","<<j+1<<")"<<endl;
cin>>x[i][j];
}
}
for (i=0;i<size;i++)
{
if(i==0)
det+=pow(-1,i)*x[0][i]*(x[i+1][i+1]*x[i+2][i+2]-x[i+1][i+2]*x[i+2][i+1]);
else if(i==size-1)
det+=pow(-1,i)*x[0][i]*(x[i-1][i-2]*x[i][i-1]-x[i][i-2]*x[i-1][i-1]);
else
det+=pow(-1,i)*x[0][i]*(x[i][i-1]*x[i+1][i+1]-x[i][i+1]*x[i+1][i-1]);
}
cout<<"the determinant of the matrix"<<endl;
for(i=0;i<size;i++)
{
for(j=0;j<size;j++)
cout<<"\t"<<x[i][j]<<setw(5);
cout<<endl;
}
cout<<"is "<<det;
return 0;
}
