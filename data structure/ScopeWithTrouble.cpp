#include<iostream>
#include<string.h>
using namespace std;
int main(){
int n;
string h;
cin>>n;
int a;
for(int i=0;i<n;i++)
{
a=1;
getline(cin,h);
for(unsigned int k=0;k<h.size();k++)
{
if(h[k]=='D')
a*=2;
else if(h[k]=='T')
a*=3;
else if(h[k]=='Q')
a*=4;
else if(h[k]=='S')
break;
}
cout<<"Order #"<<i+1<<": "<<a<<endl;
}
}
