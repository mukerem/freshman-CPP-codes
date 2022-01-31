#include<iostream>
using namespace std;
int main()
{
string a[6]={"A","B","C","D","E","F"},name;
int b[6]={15,45,14,47,56,32};
cin >>name;
for(int i=0;i<6;i++)
{
if(a[i]==name)
{
cout<<b[i];
break;
}
}
}

