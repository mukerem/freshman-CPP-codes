//25 hour 23 minute 41 second
#include <bits/stdc++.h>
using namespace std;
int main()
{
int m,s,total[3]={5,0,0};
cout<<"Enter the time of each surah\n";
for(int i=1;i<=114;i++)
{
cout<<"surah "<<i<<"\t  ";
cin>>m>>s;
total[1]=total[1]+m;
total[2]=total[2]+s;
}
total[1]=total[1]+total[2]/60;
total[2]=total[2]%60;
total[0]=total[0]+total[1]/60;
total[1]=total[1]%60;
cout<<"the total time is "<<total[0]<<" hour "<<total[1]<<" minute and " <<total[2]<<" seconds" ;
}
