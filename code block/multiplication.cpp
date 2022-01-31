#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;
int main()
{
int n,pro=1;
cout<<"enter the size of the list"<<endl;
cin>>n;
int x[n];
cout<<"enter "<<n<<" numbers randomly "<<endl;
for (int i=0;i<n;i++)
cin>>x[i];
for (int i=0;i<n;i++)
pro=pro*x[i];
cout<<"the product of "<<n<<" numbers is  "<<pro;
return 0;
}
