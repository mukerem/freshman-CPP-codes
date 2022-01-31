#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
int j;
int x[5]={11,13,15,17,19};
float sd[5],sum=0,su=0;
for(j=0;j<=4;j++)
sum=x[j]+sum;
double sdd,ave,st;
ave=sum/5.0;
cout<<"the total is  "<<sum<<endl;
cout<<"the average mark is   "<<ave<<endl;
for(j=0;j<=4;j++)
{
sd[j]=pow(ave-x[j],2);
su=sd[j]+su;
}
sdd=su/5;
st=sqrt(sdd);
cout<<"the variance is  "<<sdd<<endl;
cout<<"the standard deviation is "<<st;
return 0;

}
