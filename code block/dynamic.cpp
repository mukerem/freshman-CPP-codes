#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;
int main()
{
int a=3,b=5;
int *p1,*p2;
 p1=&b;
 p2=&a;
cout<<*(&b)
      <<"  "<<*p2<<endl;
p1=p2;
cout<<*p1<<"  "<<*p2<<endl;
cout<<a<<"  "<<b<<endl;
*p2=4;
*p1=*p2;
cout<<a<<"  "<<b;
return 0;
}
