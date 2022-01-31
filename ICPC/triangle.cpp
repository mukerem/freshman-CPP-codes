#include <bits/stdc++.h>
using namespace std;
int main()
{
int a,b,c,d;
cin>>a>>b>>c;
if(a<b){
d=a;a=b;b=d;}
if(a<c){
d=a;a=c;c=d;}
else if(b<c){
d=c;c=b;b=d;}
if(a+b+c!=180)
cout<<"Error";
else if(a==60&&b==60&&c==60)
cout<<"Equilateral";
else if(a==b||b==c||a==c)
cout<<"Isosceles";
else
cout<<"Scalene";
}
