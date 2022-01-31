#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
int i=0,c[6]={5,2,1,3,4,6};
string a="life is good";
char b[20]={'l','i','f','e'},d[]={'h','i','d','e'},e[]={'a','o','l','d'};
cout<<a.size()<<endl;
while(b[i]!='\0')
cout<<b[i++]<<"\t";
cout<<endl;
sort(c,c+6);
for(int i=0;i<6;i++)
cout<<c[i]<<"\t";
cout<<endl<<strcmp(d,e);
}
