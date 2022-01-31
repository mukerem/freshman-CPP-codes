
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
for(int i=0;i<10;i++)
{
for(int j=0;j<=i;j++)
cout<<"*";
cout<<endl;
}
for(int i=0;i<10;i++)
{
for(int j=i;j<10;j++)
cout<<"*";
cout<<endl;
}
for(int i=0;i<10;i++)
{
cout<<setw(i+1);
for(int j=i;j<10;j++)
cout<<"*";
cout<<endl;
}
for(int i=0;i<10;i++)
{
cout<<setw(10-i);
for(int j=0;j<i;j++)
cout<<"*";
cout<<endl;
}
for(int i=9;i>=1;i--)
{
for(int j=1;j<=i;j++)
cout<<setw(2)<<j;
cout<<endl;
}

}
