#include <bits/stdc++.h>
using namespace std;
int main()
{
int a1,a2,b1,b2,d;
cin>>a1>>b1>>a2>>b2;
if(a1<b1){
d=a1;a1=b1;b1=d;}
if(a2<b2){
d=a2;a2=b2;b2=d;}
if((a2-b1)*(a1-b2)>0)
cout<<"cross";
else
cout<<"not cross";
}
