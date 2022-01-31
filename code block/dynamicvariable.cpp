#include<iostream>
using namespace std;
int main(){
int *p;
int *q;
p=new int;
//q=p;
//*p=46;
*q=39;
cout<<*q<<" "<<*q
<<endl;
int *secret;
int j ;
secret=new int[10];
secret[0]=10;
for(j=1;j<10;j++)
secret[j]=secret[j-1]+5;
for(j=0;j<10;j++)
cout<<secret[j]<<" ";
cout<<endl;
int a=3,b=5;
int *p1,*p2;
 p1=&b;
 p2=&a;
cout<<*(&b)<<"  "<<*p2<<endl;
p1=p2;
cout<<*p1<<"  "<<*p2<<endl;
cout<<a<<"  "<<b<<endl;
*p2=4;
*p1=*p2;
cout<<a<<"  "<<b;
}
