#include <bits/stdc++.h>
using namespace std;
int main()
{
int d1,d2,d3,max,dis,min,tot;
cin>>d1>>d2>>d3;
tot=d1+d2+d3;
max=d1;
if(d1<d2)
max=d2;
if(max<d3)
max=d3;
min=tot-max;
if(max<min)
dis=tot;
else
dis=2*min;
cout<<"The minimum distance is "<<dis;
}

