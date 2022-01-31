
#include <iostream>
#include <iomanip>
//#include <cstring>
using namespace std;
char calculategrade(double courseAver);
int main()
{
int course[5][3]={1,11,23,22,11,44,2,3,4,5,1,2,3,4,12},maxi[3];
for(int i=3;i<=3;i++)
{
maxi[i]=0;
 for(int j=0;j<5;j++)
{
if(maxi[i]>course[j][i])
maxi[i]=course[j][i];

}
}
for(int i=3;i<=3;i++)
cout<<maxi[i]<<endl;
}
